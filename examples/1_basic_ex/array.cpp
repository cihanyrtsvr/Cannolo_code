#include <iostream>
#include <array>
#include <iomanip>
using namespace std;



int main(){
    array<int,5> items{1,2,3,4,5};
    cout << "Items are; ";
    for(size_t print_item : items){
        cout<<print_item<<" - ";
    }
    for(int& item:items){
        item *= item;
    }
    for(int fin: items){
        cout<<"\n"<<fin;
    } 

    return 0;
}

