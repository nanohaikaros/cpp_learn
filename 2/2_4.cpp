#include <iostream>

using namespace std;

// function declaration
int DemoConsoleOutput();

int main() {
    // call i.e. invoke the function
    DemoConsoleOutput();
    return 0;
}

// function definition
int DemoConsoleOutput() {
    cout << "This is a simple string literal" << endl;
    cout << "Writing number five: " << 5 << endl;
    cout << "Performing divisioin 10 / 5 = " << 10 / 5 << endl;
    cout << "Pi when approximated is 22 / 7 = " << 22 / 7 << endl;
    cout << "Pi more accurately is 22 / 7 = " << 22.0 / 7 << endl;

    return 0;
}