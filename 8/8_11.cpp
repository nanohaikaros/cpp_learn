#include <iostream>
using namespace std;

int main() {
    // static array of 5 integers
    int MyNumbers[5];

    // array assigned to pointer to int
    int *pNumbers = MyNumbers;

    // display address contained in pointer
    cout << "pNumbers 0x" << hex << pNumbers << endl;

    // address of first element of array
    cout << "&MyNumbers[0] = 0x" << hex << &MyNumbers[0] << endl;

    return 0;
}