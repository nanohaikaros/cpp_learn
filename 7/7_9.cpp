#include <iostream>
using namespace std;

const double Pi = 3.1416;

// outpu parameter Result by reference
void Area(double Radius, double& Result) {
    Result = Pi * Radius * Radius;
}

int main() {
    cout << "Enter radius: ";
    double Radius = 0;
    cin >> Radius;

    double AreaFetched = 0;
    Area(Radius, AreaFetched);

    cout << "The area is: " << AreaFetched << endl;
    return 0;
}