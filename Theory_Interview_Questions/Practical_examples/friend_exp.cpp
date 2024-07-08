#include <iostream> 
using namespace std; 

int long_string(const char*);

class Count{
    friend void setX(Count&, int); // friend decleration
public:
    int getX() const {return x;}

    private: 
    int x{0};
};

void setX(Count& c, int val){
    c.x=val;
}
int main(){

    Count counter; 

    cout<<" coutner.x after instantiotion: "<< counter.getX()<<endl;
    setX(counter, 8);
    cout << "counter.x after call to setX friend function: " << counter.getX() << endl;
    return 0;
}
