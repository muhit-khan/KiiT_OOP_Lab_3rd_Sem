/*2. Create two classes which stores distance in feet, inches and meter, centimeter format respectively.
Write a function which compares distance in object of these classes and displays the larger one.*/

#include <iostream>
using namespace std;

class DMC
{
public:
    float meters, centimeters;
    float dist_C;
};
class DFI
{
public:
    float inch, feet;
    float dist_I;
};
void compares(DMC a, DFI b)
{
    if ((a.dist_C * 2.54) > b.dist_I)
        cout << "Distance in meters and centimers is larger\n";
    else
        cout << "Distance in inches and feet is larger\n";
}
int main()
{
    DMC x;
    DFI y;
    cout << "Enter Distance inf Meter & Centimeter: ";
    cin >> x.meters >> x.centimeters;
    cout << "Enter Distance in Feet and Inches: ";
    cin >> y.feet >> y.inch;
    x.dist_C = x.meters * 100 + x.centimeters;
    y.dist_I = y.feet * 12 + y.inch;
    compares(x, y);
}