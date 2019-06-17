#include <iostream>
#include <cstring>
using namespace std;

class President {
    private:
    // private default constructor (prohibits creation from outside)
        President(){};

    // private copy constuctor (prohibits copy creation)
        President(const President &);
    
    // private assignment operator (prohibits assignment)
        const President &operator=(const President &);

    // member data: President name
        string Name;

    public:
    // controlled instantiation
    static President& GetInstance() {
        // static objects are constructed only once
        static President OnlyInstance;
        return OnlyInstance;
    }

    // public methods
    string GetName() {
        return Name;
    }

    void SetName(string InputName) {
        Name = InputName;
    }
};

int main() {
    President &OnlyPresident = President::GetInstance();
    OnlyPresident.SetName("Abraham Lincoln");

    // uncomment lines to see how compile failures prohibit duplicates
    // President Second;    // cannot access constructor
    // President* Third = new President();  // cannot access constructor
    // President Fourth = OnlyPresident;    // cannot access copy constructor
    // OnlyPresident = President::GetInstance();    // cannot access operator=

    cout << "The name of President is: ";
    cout << President::GetInstance().GetName() << endl;

    return 0;
}