#include <iostream>
#include <cstring>
using namespace std;

class Human {
    private:
        string Name;
        int Age;

    public:
    void SetName(string HumansName) {
        Name = HumansName;
    }

    void SetAge(int HumansAge) {
        Age = HumansAge;
    }

    void IntroduceSelf() {
        cout << "I am " + Name + " and am ";
        cout << Age << " years old" << endl;
    }
};

int main() {
    // constructing an object of class Human with attribute Name as "Adam"
    Human FirstMan;
    FirstMan.SetName("Adam");
    FirstMan.SetAge(30);

    // constructing an object of class Human with attribute Name as "Eve"
    Human FirstWoman;
    FirstWoman.SetName("Eve");
    FirstWoman.SetAge(28);

    FirstMan.IntroduceSelf();
    FirstWoman.IntroduceSelf();
}