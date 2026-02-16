#include <iostream>
using namespace std;

// THE CHALLENGE: Fill in this function
void copyString(char *destination, const char *source) {
    while((*destination++ =*source++)){}
}

int main() {
    char string1[] = "Hello Austria!";
    char string2[20]; // Empty buffer ready to receive data

    copyString(string2, string1);

    cout << "String 2 now contains: " << string2 << endl;

    return 0;
}