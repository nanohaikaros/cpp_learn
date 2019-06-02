#include <iostream>
using namespace std;

int main() {
    cout << "This program will help you multiply two numbers" << endl;

    cout << "Enter the first number: ";
    int FirstNumber = 0;
    cin >> FirstNumber;

    cout << "Enter the second number: ";
    int SecondNumber = 0;
    cin >> SecondNumber;

    // multiply two numbers, store result in a variable
    int MultiplcationResult = FirstNumber * SecondNumber;

    // display result
    cout << FirstNumber << " x " << SecondNumber;
    cout << " = " << MultiplcationResult << endl;

    return 0;
}