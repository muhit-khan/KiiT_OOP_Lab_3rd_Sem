// /*Create a class shape, derive 3 classes from it named Circle, Square, Triangle. Find the area of each shape and display using virtual function*/

#include <iostream>
#include <stdlib.h>
using namespace std;

class Shape
{
protected:
    float area;

public:
    void display()
    {
        cout << "Area: " << area;
    }
};

class Circle : public Shape
{
protected:
    float radius;

public:
    Circle(float r)
    {
        radius = r;
    };
    void Area()
    {
        area = 3.1416 * radius * radius;
    }
};
class Square : public Shape
{
private:
    float arm;

public:
    Square(float a)
    {
        arm = a;
    };

    void Area()
    {
        area = arm * arm;
    }
};
class Triangle : public Shape
{
private:
    float height, base;

public:
    Triangle(float h, float b)
    {
        height = h;
        base = b;
    };
    void Area()
    {
        area = 0.5 * height * base;
    }
};

int main()
{
    Circle c1(5.0);
    c1.display();
    Square s1(5.0);
    s1.display();
    Triangle t1(3.0, 4.0);
    t1.display();

    return 0;
}