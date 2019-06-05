#include <iostream>
using namespace std;

int main() {        // an infinite loop
    for (;;){
        cout << "Enter two integers: " << endl;
        int Num1 = 0, Num2 = 0;
        cin >> Num1;
        cin >> Num2;

        cout << "Do you wish to correct the numbers? (y/n): ";
        char ChangeNumber = '\0';
        cin >> ChangeNumber;

        if (ChangeNumber == 'y')
            continue;       // restart the loop!

        cout << Num1 << " x " << Num2 << " = " << Num1 * Num2 << endl;
        char UserSelection = '\0';
        cin >> UserSelection;

        if (UserSelection == 'x')
            break;          // exit the infinite loop
    }

    cout << "Goodbye!" << endl;

    return 0;
}