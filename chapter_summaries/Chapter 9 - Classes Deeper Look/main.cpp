#include <iostream>
#include "MyTime.h"

using namespace std; 


int main(){
    Time t(21, 05);


    cout<<"Standard hours: \t"<<t.toStandardString() << "Universal hour: \t"<< t.toUniversalString()<<endl;

}