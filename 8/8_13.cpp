#include <iostream>
using namespace std;

int main() {
    // uninitialized pointer
    int *pTemperature;

    cout << "Is it sunny (y/n)?" << endl;
    char UserInput = 'y';
    cin >> UserInput;

    if (UserInput == 'y') {
        pTemperature = new int;
        *pTemperature = 30;
    }

    // pTemperature contains incalid value if user entered 'n'
    cout << "Temperature is: " << *pTemperature;

    // delete also being invoked for those cases new wasn't done
    delete pTemperature;

    return 0;
}