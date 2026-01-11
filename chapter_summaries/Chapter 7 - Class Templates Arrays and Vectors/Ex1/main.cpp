#include <iostream>
#include <array>
#include <iomanip>
using namespace std;


int main(){

    const size_t randomSize{20};
    const size_t countSize{5};

    array<unsigned int,randomSize> randomNumbers{
        1, 2, 5, 4, 3, 5, 2, 1, 3, 1, 4, 3, 3, 3, 2, 3, 3, 2, 2, 5
    };

    array<unsigned int, countSize> countResults{
    };

    for( size_t i{0}; i<randomNumbers.size(); i++){
        ++countResults[randomNumbers[i]-1];
    }

    for(size_t j{0}; j<countResults.size(); j++){
        cout<< setw(6)<< "Rating " << j +1 << setw(23)<<"Number of Occurance "<<countResults[j]<<endl;
    }

}