#include <iostream>
using namespace std;

class Date {
    private:
        int Day;        // Range: 1 - 30(lets assume all months have 30 days)
        int Month;
        int Year;

    public:
        // constructor that initializes the object to a day, month and year
        Date (int InputDay, int InputMonth, int InputYear)
        : Day(InputDay), Month(InputMonth), Year(InputYear) {};

        // unary increment operator (prefix)
        Date &operator ++ () {
            ++Day;
            return *this;
        }

        // unary decrement operator (prefix)
        Date &operator -- (){
            --Day;
            return *this;
        }

        void DisplayDate() {
            cout << Day << " / " << Month << " / " << Year << endl;
        }
};

int main() {
    // Instantiate and initialize a date object to 25 Dec 201
    Date Holiday(25, 12, 2011);

    cout << "The date object is initialized to: ";
    Holiday.DisplayDate();

    // Applying the prefix increment operator
    ++Holiday;

    cout << "Date after prefix-increment is: ";

    // Display date after incrementing
    Holiday.DisplayDate();

    --Holiday;
    --Holiday;

    cout << "Date after two prefix-decrements is: ";
    Holiday.DisplayDate();

    return 0;
}