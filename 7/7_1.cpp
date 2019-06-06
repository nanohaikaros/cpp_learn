#include <iostream>
using namespace std;

const double Pi = 3.14159;

// function declarations (prototypes)
double Area(double InputRadius);
double Circumference(double InputRadius);

int main() {
    cout << "Enter radius: ";
    double Radius = 0;
    cin >> Radius;

    // call function "Area"
    cout << "Area is: " << Area(Radius) << endl;

    // call function "Circumference"
    cout << "Circumference is: " << Circumference(Radius) << endl;

    return 0;
}

// function definitions (implementations)
double Area(double InputRadius) {
    return Pi * InputRadius * InputRadius;
}

double Circimference(double InputRadius) {
    return 2 * Pi * InputRadius;
}