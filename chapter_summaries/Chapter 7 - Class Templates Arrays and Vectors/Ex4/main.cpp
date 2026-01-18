#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath> 
#include <algorithm>

using namespace std;

int main(){
    // 1. Setup: Define the limit (checking numbers 0 to 1023)
    unsigned int N{1024};
    
    // Create a vector where index = number.
    // We start by assuming ALL numbers are prime (true).
    vector<bool> Eratosthenes(N, true);

    // 2. Base Cases: 0 and 1 are mathematically not prime.
    // We manually mark them false before the loop starts.
    Eratosthenes[0] = false;
    Eratosthenes[1] = false;

    // 3. The "Sieve" Loop (The Filtering Process)
    // We only loop up to sqrt(N) because any non-prime number must have 
    // at least one factor smaller than or equal to its square root.
    for (int i = 2; i < sqrt(N); i++){
        
        // If 'i' is still true, it is a Prime Number!
        // (It was not crossed out by any previous smaller number)
        if(Eratosthenes.at(i) == true){
            
            // Optimization: Start crossing out at 'i * i'
            // Why? Smaller multiples (like 2*i or 3*i) were already 
            // crossed out by previous loops (when i was 2 or 3).
            for(int j = i*i; j < N; j += i){
                    Eratosthenes.at(j) = false; // Mark multiples as Not Prime
            }
        }
    }

    // 4. Output Loop
    int primesFound = 0; // Counter to help with formatting
    
    for (int k = 0; k < N; k++)
    {
        // If the value is still true, it survived the Sieve -> It is Prime.
        if(Eratosthenes.at(k) == true){
            cout << k << "\t";
            
            primesFound++;

            // Formatting: Print a new line after every 10 primes found
            if(primesFound % 10 == 0 ){
                cout << endl; 
            }
        }
    }

    return 0;
}