#include <iostream>
#include <vector>

using namespace std;




int main() {
    vector <int> integers;
    const size_t SIZE{6};

    int numbers_array[SIZE]{1,2,3,4,5,6};

    for (const int* normal_ptr = cbegin(numbers_array); normal_ptr != cend(numbers_array); normal_ptr++){
        cout << *normal_ptr<< ' '; 
    }
    cout << "\nexample with vector"<<endl;
    integers.emplace_back(2);
    integers.emplace_back(3);
    integers.emplace_back(4);

    for (auto reverse_ptr = integers.crbegin(); reverse_ptr != integers.crend(); ++reverse_ptr  )
    {
        cout << *reverse_ptr<< " ";
    }
    cout << "\nexample with normal vector"<<endl;
    printVector(integers);

}
    
template <typename T> void printVector(const vector<T>& integers2) {
    for(auto counter = integers2.cbegin(); counter != integers2.cend(); counter++){
        cout<< *counter << ' ';
    }
}