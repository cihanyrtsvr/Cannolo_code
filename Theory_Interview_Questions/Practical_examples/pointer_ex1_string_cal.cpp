#include <iostream> 
using namespace std; 

int long_string(const char*);

int main(){

    char name[100];

    cout<<"Please enter a string: ";
    cin>>name; 
    cout<<long_string(name)<<endl;

    return 0;
}

int long_string(const char* s){

    unsigned int x{0};
    for(x=0; *s != '\0'; ++s){
        ++x;
    }

    return x;
}