#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    int Q, type, x;
    string y;
    map<string, int> take_map;
    
    cin>>Q;
    for(int i=0; i<Q; i++){
        cin>>type;
        if(type==1)
        {
            
            cin>>y>>x;
            if(take_map[y]!=0){
                take_map[y] +=x;
                cout<<take_map[y];
            }
            else{
                take_map[y]=x;
                cout<<take_map[y]<<endl;
            }
        }
        if(type==2){
            cin>>y;
            take_map.erase(y);
        }
        if(type==3){
            cin>>y;
            auto it = take_map.find(y);
            if(it != take_map.end()){
                cout<<take_map[y]<<endl;
            }
        }
    }
    return 0;
}
