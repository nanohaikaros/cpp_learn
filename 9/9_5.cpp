#include <iostream>
#include <cstring>
using namespace std;

class Human {
    private:
    // private member data;
        string Name;
        int Age;

    public:

    // overloaded constructor (no default constructor)
    Human(string HumansName, int HumansAge) {
        Name = HumansName;
        Age = HumansAge;
        cout << "Overloaded constructor creates " << Name;
        cout << " of age " << Age << endl;
    }

    void IntroduceSelf() {
        cout << "I am " + Name << " and am ";
        cout << Age << " years old" << endl;
    }
};

int main() {
    // uncomment next line to try creating using a default constructor
    // Human FirstMan

    Human FirstMan("Adam", 30);
    Human FirstWoman("Eve", 28);

    FirstMan.IntroduceSelf();
    FirstWoman.IntroduceSelf();
}