#include <iostream>
using namespace std;

int main() {
    int Age = 30;
    int *pInteger = &Age;       // pointer to an int, initialized to &Age

    // displaying the value of pointer
    cout << "Integer Age is at: 0x" << hex << pInteger << endl;

    return 0;
}