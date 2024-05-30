#include <fstream>
#include <iostream>
#include <array>
#include <vector>
#include <iomanip>

using namespace std;



int main(){
    string str = "pqr3stu8vwx";
    int first = -1, second =-1, total;
    vector<int> result;

    ifstream file("input.txt");

    string line;
    while(getline(file, line)){

    for ( char c : line){
        if(c>=48 && c <= 57){
            first<0 ? first = c-48 : second = c-48 ;
            
        }
    }

    second < 0 ? second = first : second=second ;
          
    cout << (first * 10) + second << endl;

    total += (first * 10) + second ;

    first = -1;
    second = -1 ;
    
    }

    cout<< total<<endl;
    return 0;
}

