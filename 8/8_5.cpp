#include <iostream>
using namespace std;

int main() {
    int DogsAge = 30;
    cout << "Initialized DogsAge = " << DogsAge << endl;

    int *pAge = &DogsAge;
    cout << "pAge points to DogsAge" << endl;

    cout << "Enter an age of your dog: ";

    // store input at the memory pointed to by pAge
    cin >> *pAge;

    // displaying the address where age is stored
    cout << "Input stored using pAge at " << hex << pAge << endl;

    cout << "Integer DogsAge = " << dec << DogsAge << endl;

    return 0;
}