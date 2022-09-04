// Q4. C++ Program to demonstrate order of constructor and destructor calls

#include <iostream>
using namespace std;

class Demo
{
    int i;

public:
    Demo(int ii)
    {
        i = ii;
        cout << "Constructor Invoked" << endl;
    }
    ~Demo()
    {
        cout << "Destructor Invoked" << endl;
    }
};

Demo a1(1);

int main()
{
    Demo a2(2);
}