#include <iostream>
#include <cstring>
using namespace std;

class MyString {
    private:
        char *Buffer;

    public:
        // constrictor
        MyString(const char *InitialInput) {
            if (InitialInput != NULL) {
                Buffer = new char[strlen(InitialInput) + 1];
                strcpy(Buffer, InitialInput);
            } else
                Buffer = NULL;
        }

        // copy constructor
        MyString(const MyString &copySoure) {
            if (copySoure.Buffer != NULL) {
                Buffer = new char[strlen(copySoure.Buffer) + 1];
                strcpy(Buffer, copySoure.Buffer);
            } else
                Buffer = NULL;
        }

        ~MyString() {
            if (Buffer != NULL)
                delete[] Buffer;
        }

        int GetLength() {
            return strlen(Buffer);
        }

        const char *GetString() {
            return Buffer;
        }
};

class Human {
    private:
        int Age;
        bool Gender;
        MyString Name;

    public:
        Human(const MyString &InputName, int InputAge, bool InputGender)
        : Name(InputName), Age(InputAge), Gender(InputGender) {}

        int GetAge() {
            return Age;
        }
};

int main() {
    MyString FirstMan("Adam");
    MyString FirstWoman("Eve");

    cout << "sizeof(MyString) = " << sizeof(MyString) << endl;
    cout << "sizeof(FirstMan) = " << sizeof(FirstMan) << endl;
    cout << "sizeof(FirstWoman) = " << sizeof(FirstWoman) << endl;

    Human FirstMaleHuman(FirstMan, 25, true);
    Human FirstFemaleHuman(FirstWoman, 18, false);

    cout << "sizeof(Human) = " << sizeof(Human) << endl;
    cout << "sizeof(FirstMaleHuman) = " << sizeof(FirstMaleHuman) << endl;
    cout << "sizeof(FirstFemaleHuman) = " << sizeof(FirstFemaleHuman) << endl;

    return 0;
}