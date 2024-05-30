
#include <iostream>
#include <array>
#include <string>
#include <iomanip>
using namespace std;

class GradeBook {

};


int main(){
    cout<<"Hellow!\n"<<endl;
    int i = 1;
    int &r = i;

    i = 5;
    cout << i << " - " << r << " - "<< &r  << " - " << &i <<endl;
    
    int* ptr = new int(5);

    delete ptr; 
    cout<< ptr << " " << *ptr<<endl;

    ptr = nullptr; 

    cout<< "oh yeah null needed to be; "<<ptr<<endl ; 
    return 0;

}


