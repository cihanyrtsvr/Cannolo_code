#include <map>
#include <iostream>

template<typename K, typename V>
class interval_map {
	friend void IntervalMapTest();
	V m_valBegin;
	std::map<K, V> m_map;

public:
	// Constructor associates the whole range of K with val
	interval_map(V const& val)
		: m_valBegin(val)
	{}

	// Assign value val to interval [keyBegin, keyEnd).
	void assign(K const& keyBegin, K const& keyEnd, V const& val) {
		if (keyBegin >= keyEnd) {
			return;
		}

		// Get iterators to the affected range
		auto iteration_start = m_map.lower_bound(keyBegin);
		auto iteration_end = m_map.lower_bound(keyEnd);
        V prevous_value_start, prevous_value_end;
		// Store values for boundaries
        if(iteration_start != m_map.begin()){
            prevous_value_start = std::prev(iteration_start)->second;
        }else{
            prevous_value_start = m_valBegin;
        }

        if(iteration_end != m_map.end()){
            prevous_value_end = std::prev(iteration_end)->second;
        }else{
            prevous_value_end = m_valBegin;
        }
		
		// Erase the range of elements that will be overwritten
		m_map.erase(iteration_start, iteration_end);

		// Insert new interval boundaries if necessary
		if (prevous_value_start != val) {
			m_map[keyBegin] = val;
		}

		if (prevous_value_end != val) {
			m_map[keyEnd] = prevous_value_end;
		}
	}

	// Look-up of the value associated with key
	V const& operator[](K const& key) const {
		auto it = m_map.upper_bound(key);
		if (it == m_map.begin()) {
			return m_valBegin;
		} else {
			return (--it)->second;
		}
	}
};

// Test function to verify the interval_map functionality
void IntervalMapTest() {
	interval_map<int, char> im('A');
	im.assign(1, 3, 'B');
	im.assign(4, 5, 'C');

	for (int i = -1; i < 6; ++i) {
		std::cout << "im[" << i << "] = " << im[i] << std::endl;
	}
}

int main() {
	IntervalMapTest();
	return 0;
}
