#include <iostream>
using namespace  std;

int main() {
    try {
        // request lots of memory space
        int *pAge = new int[11111111111];

        // use the allocated memoty

        delete[] pAge;
    }
    catch (bad_alloc) {
        cout << "Memory allocation failed. Ending program" << endl;
    }
    return 0;
}