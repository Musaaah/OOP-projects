//NAME: MOSES WACHIRA
//REG NO: BSE-05-0193/2024
//PROJECT: VOLUME OF A CYLINDER

#include <iostream>
#include <cmath>

using namespace std;
const double PI = 3.14159265358979323846;

double calculateVolume(double radius, double height) {
    return PI * pow(radius, 2) * height;
}
int main() {
    double radius, height;
    cout << "Enter the radius of the cylinder: ";
    cin >> radius;
    cout << "Enter the height of the cylinder: ";
    cin >> height;
    double volume = calculateVolume(radius, height);
    cout << "The volume of the cylinder is: " << volume << " cubic units" << endl;
    return 0;
}

