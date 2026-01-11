#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;


int main(){

    vector<unsigned int> randomNumbers{
        12, 22, 45, 44, 83, 45, 12, 18, 35, 14, 44, 33, 38, 39, 21, 34, 31, 28, 22, 59
    };

    vector<unsigned int> countResults{
    };

    for (auto i : randomNumbers){
        
        if(i>=10 && i<100){

        
            if(find(countResults.cbegin(), countResults.cend(), i) != countResults.cend()){
                continue;
            }
            else{
                countResults.emplace_back(i);
                cout<<i<<" - ";
            }
        }
        else{
            continue;
        }
    }
}

