#include <iostream>
#include <array>
#include <iomanip>
using namespace std;


int main(){

    const size_t randomSize{20};
    const size_t countSize{100};

    array<unsigned int,randomSize> randomNumbers{
        12, 22, 45, 44, 83, 45, 12, 18, 35, 14, 44, 33, 38, 39, 21, 34, 31, 28, 22, 59
    };

    array<unsigned int, countSize> countResults{
    };

    for (auto i : randomNumbers){
        
        if(i>=10 && i<100){

        
            if(countResults[i] == i ){
                continue;
            }
            else{
                countResults[i] = i;
                cout<<i<<" - ";
            }
        }
        else{
            continue;
        }
    }
}