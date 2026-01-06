#include <iostream>

using namespace std; 


int main(){
    const int SIZE(80);
    int character;
    char buffer1[SIZE];
    char buffer2[SIZE];

    cout<<"Ente rsentence:\n";
    cin>>buffer1;

    cout<<"Stupid shit: "<<buffer1<<"\n"<<endl; 


    cin.get(buffer2,SIZE);

    cout <<"The string read with cin.get was:\n" << buffer2 << endl;

}