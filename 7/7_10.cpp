#include <iostream>
using namespace std;

// define an inline function that doubles
inline long DoubleNum(int InputNum) {
    return InputNum * 2;
}

int main() {
    cout << "Enter an integer: ";
    int InputNum = 0;
    cin >> InputNum;

    // call inline function
    cout << "Double is: " << DoubleNum(InputNum) << endl;

    return 0;
}