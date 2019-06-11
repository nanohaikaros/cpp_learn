#include <iostream>
using namespace std;

int main() {
    // request for memory space for an int
    int *pAge = new int;

    // use the allocated memoty to store a number
    cout << "Enter your dog's age: ";
    cin >> *pAge;

    // use indirection operator* to access value
    cout << "Age " << *pAge << " is stored at 0x" << hex << pAge << endl;

    delete pAge;        // release memoty

    return 0;
}