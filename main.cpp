#include <iostream>
#include <vector>
#include <list> 
#include <iterator>
#include <algorithm>

using namespace std;

template <typename T> void printVector(const vector<T>& integers2);

template <typename T> void printList(const list<T>& listRef);

int sumSquares(int total, int value) {
return total + value * value;
}

int main() {
    vector <int> integers;
    const size_t SIZE{9};

    list <int> name_int_list, another_list;
    name_int_list.push_back(2);
    name_int_list.push_back(3);
    name_int_list.push_front(1);
    name_int_list.push_front(8);
    name_int_list.push_front(9);

    another_list.push_back(5);
    another_list.push_back(6);
    another_list.push_front(3);
    another_list.push_front(33);
    another_list.push_front(8);
    int numbers_array[SIZE]{1,2,3,4,5,6,9,2,4};

    for (const int* normal_ptr = cbegin(numbers_array); normal_ptr != cend(numbers_array); normal_ptr++){
        cout << *normal_ptr<< ' '; 
    }
    cout << "\nexample with vector"<<endl;
    integers.emplace_back(2);
    integers.emplace_back(7);
    integers.emplace_back(3);
    integers.emplace_back(4);

    for (auto reverse_ptr = integers.crbegin(); reverse_ptr != integers.crend(); ++reverse_ptr  )
    {
        cout << *reverse_ptr<< " ";
    }
    cout << "\nexample with normal vector"<<endl;
    printVector(integers);
    cout <<"\nThe list elements are; ";
    printList(name_int_list);
    cout <<"\nThe list elements that are sorted; "<<endl;
    name_int_list.sort();
    printList(name_int_list);
    cout <<"\nThe list elements after merge; "<<endl;
    name_int_list.merge(another_list);
    printList(name_int_list);
    cout <<"\nThe list elements that are sorted; "<<endl;
    name_int_list.sort();
    name_int_list.unique();
    printList(name_int_list);
    cout<<endl;
    int sum = 0;
    for_each(integers.cbegin(), integers.cend(), 
        [](auto i ){cout << i*2<<" ";});

    for_each(integers.cbegin(), integers.cend(), 
    [&sum](auto i){sum+=i;});
   

    auto location = find(integers.cbegin(), integers.cend(), 7);
    cout<<"\nsum: "<<sum<<" the location of 7 in vector: "<<location -integers.cbegin() <<endl;

    // create variable to store lambda for reuse later
    auto isGreaterThan10{ [](auto x){return x > 5;} };
    // locate first occurrence of value greater than 10 in a
    location = find_if(integers.cbegin(), integers.cend(), isGreaterThan10);
    if (location != integers.cend()){cout << "\n\nThe first value greater than 5 is " << *location
    << "\nfound at location " << (location - integers.cbegin())<<endl;
    }
    else { // value greater than 10 not found
    cout << "\n\nNo values greater than 5 were found"<<endl;}
    sort(integers.begin(), integers.end());
    bool res = binary_search(integers.cbegin(), integers.cend(), 7);
    printVector(integers);
    cout << res << endl;

    auto result = minmax_element(integers.cbegin(), integers.cend());

    cout<< "The min of integers vector: "<<*result.first<<" The max is: "<<*result.second<<endl;
    int rez {accumulate(integers.cbegin(), integers.cend(),0,sumSquares)}
}




    
template <typename T> void printVector(const vector<T>& integers2) {
    for(auto counter = integers2.cbegin(); counter != integers2.cend(); counter++){
        cout<< *counter << ' ';
    }
}

template <typename T> void printList(const list<T>& listRef){
    if (listRef.empty()) { // list is empty
        cout << "List is empty";
        }
    else {
        ostream_iterator<T> output{cout, " "};
        copy(listRef.cbegin(), listRef.cend(), output);
    }

}