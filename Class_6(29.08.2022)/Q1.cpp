/*Create a class complex which stores real and imaginary part of a complex number. Include all types of
constructors and destructor. The destructor should display a message about the destructor being
invoked. Create objects using different constructors and display them.*/

#include <iostream>
using namespace std;
class Complex
{
private:
    int realNumber;
    int imagNumber;

public:
    Complex()
    {
        cout << "Default constructor called" << endl;
    }
    Complex(int rN, int iN)
    {
        cout << "Parameterized constructor called" << endl;
        realNumber = rN;
        imagNumber = iN;
    }
    Complex(Complex &obj)
    {
        cout << "Copy constructor called" << endl;
        realNumber = obj.realNumber;
        imagNumber = obj.imagNumber;
    }
    ~Complex()
    {
        cout << "Destructor Invoked" << endl;
    }
    void display() // display function
    {
        cout << "\t" << realNumber << "+" << imagNumber << "i" << endl;
    }
};
int main()
{
    Complex cmp1;
    Complex cmp2(12, 45);
    Complex cmp3(cmp2);

    cmp1.display();
    cmp2.display();
    cmp3.display();
    return 0;
}