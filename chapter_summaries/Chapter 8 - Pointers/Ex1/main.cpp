#include <iostream>
#include <array>
#include <iomanip>
using namespace std;


// C++ way pass by reference
void swap_numbers(int & a, int & b ){
    int c=  b; 
    b= a;
    a= c;

}

// C-way pass by pointer
void ptr_swap_numbers(int *a, int *b){
    int tentative = *b;
    *b=*a;
    *a= tentative;
}

int main(){
    int first,second;

    cin>> first >> second; 
    cout<<"\nfirst: "<<first<< "\tsecond: "<<second<<endl;

    swap_numbers(first, second);
    cout<<"Later;\n"<<"First: "<<first<<" Second: "<<second<<endl;

    cin>> first >> second; 
    cout<<"\nfirst: "<<first<< "\tsecond: "<<second<<endl;

    ptr_swap_numbers(&first, &second);
    cout<<"Later;\n"<<"First: "<<first<<" Second: "<<second<<endl;

    return 0;

}