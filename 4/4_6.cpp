#include <iostream>
#include <cstring>
using namespace std;

int main() {
    cout << "Enter a world NOT longer than 20 characters: " << endl;

    char UserInput[21] = {'\0'};
    cin >> UserInput;

    cout << "Length of you input was: " << strlen(UserInput) << endl;

    return 0;
}