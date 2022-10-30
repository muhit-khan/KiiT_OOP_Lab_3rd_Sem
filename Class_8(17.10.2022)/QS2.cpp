// 2. crt a class which is a complex number , add two object and
// display the resultant object, overload ++ which is post and pre increment for the class

#include <iostream>
using namespace std;

class complex
{
private:
    int real, im;

public:
    complex(int r, int c)
    {
        real = r;
        im = c;
    }
    void show()
    {
        cout << " " << real << " + " << im << "i" << endl;
    }
    complex operator+(complex &obj)
    {
        real += obj.real;
        im += obj.im;
    }
    complex operator++() // pre increment
    {
        real++;
        im++;
    }
    complex &operator++(int) // post increment
    {
        real++;
        im++;
    }
};

int main()
{
    complex a(10, 4), b(20, 34);
    a.show();
    b.show();
    a + b;
    a.show();
    ++b; // pre increment
    b.show();
    b++; // post increment
    b.show();

    return 0;
}