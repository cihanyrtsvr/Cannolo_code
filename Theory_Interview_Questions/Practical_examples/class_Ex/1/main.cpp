#include <iostream>
#include "balance.h"
using namespace std;


int main(){
    int i; 
    Balance cihanAccount;

    cin>> i;
    cihanAccount.setBalance(i);
    cout<<"The total account is; "<<cihanAccount.getBalance()<<endl;

    return 0;
}
