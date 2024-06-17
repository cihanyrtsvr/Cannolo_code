#include <fstream>
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;



void staticCounter() {
   int counter = 0; // Initialized only once when the function is first called
  counter++;
  std::cout << "Counter inside function: " << counter << std::endl;
}

int main() {
  // Call the function multiple times
  for (int i = 0; i < 3; i++) {
    staticCounter();
  }
  return 0;
}