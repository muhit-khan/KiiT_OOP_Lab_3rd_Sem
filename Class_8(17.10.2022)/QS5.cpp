// 5. wap to add two obj of distance class overload the > operator to compare two obj and
// return the object with distance value and display it by overloading the == operator

#include <iostream>
using namespace std;
class distances
{
    float feet, inches;

public:
    distances()
    {
        feet = inches = 0.0;
    }
    distances(float f, float i)
    {
        feet = f;
        inches = i;
    }
    bool operator>(distances d2);
    bool operator==(distances d2);
    distances operator+(distances d2);
    void display()
    {
        cout << feet << "feet " << inches << "inches"
             << "\n";
    }
};
distances distances::operator+(distances d2)
{
    distances d;
    d.feet = feet + d2.feet;
    d.inches = inches + d2.inches;
    return d;
}
bool distances::operator>(distances d2)
{
    float t1, t2;
    t1 = feet + inches / 12.0;
    t2 = d2.feet + d2.inches / 12.0;
    return (t1 > t2) ? true : false;
}
bool distances::operator==(distances d2)
{
    if (feet == d2.feet && inches == d2.inches)
        return true;
    else
        return false;
}
int main()
{
    distances d1(5, 7), d2(7, 11), d3(5, 7), d4;
    cout << "\nGreater than operator overloading\n";
    if (d1 > d2)
        cout << "dist1 is larger \n";
    else
        cout << "dist1 is less than dist2 \n";
    cout << "\nequal to operator overloading\n";
    if (d1 == d3)
        cout << "equal \n";
    else
        cout << "unequal \n";
    cout << "\n\nplus operator overloading to add 2 objects\n";
    d4 = d2 + d3;
    d4.display();
}