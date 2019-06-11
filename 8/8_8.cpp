#include <iostream>
#include <cstring>
using namespace std;

int main() {
    cout << "Enter your name: ";
    string Name;
    cin >> Name;

    // add 1 to reserve space for a terminating null
    int CharsToAllocate = Name.length() + 1;

    // request for memory to hold copy of input
    char *CopyOfName = new char[CharsToAllocate];

    // strcpy copies from a null-terminated string
    strcpy(CopyOfName, Name.c_str());

    // display the copies string
    cout << "Dynamically allocated buffer contains: " << CopyOfName << endl;

    // done using buffer? Delete
    delete[] CopyOfName;

    return 0;
}