#include <iostream>
using namespace std;

int main() {
    // request lots of memory space, use nothrow version
    int *pAge = new (nothrow) int[0x1ffffffffff];

    if (pAge) {              //check pAge != NULL
        // use the allocated memoty
        delete[] pAge;
    } else
        cout << "Memoty allocation failed. Ending program" << endl;

    return 0;
}