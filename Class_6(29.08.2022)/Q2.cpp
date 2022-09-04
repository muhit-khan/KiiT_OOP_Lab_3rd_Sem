/*Q2. Create a class which stores time in hh:mm format. Include all the constructors. The parameterized
constructor should initialize the minute value to zero, if it is not provided.*/

#include <iostream>
using namespace std;
class Time
{
private:
    int hour = 0;
    int minute = 0;

public:
    Time()
    {
        cout << "Default Costructor called" << endl;
    }
    Time(int h, int m)
    {
        cout << "Parameterized Costructor called" << endl;
        hour = h;
        minute = m;
    }
    Time(Time &obj) // copy constructor
    {
        cout << "Copy Costructor called" << endl;
        hour = obj.hour;
        minute = obj.minute;
    }
    ~Time()
    {
        cout << "Destructor invoked" << endl;
    }
    void display()
    {
        cout << "Entered time is " << hour << " : " << minute << endl;
    }
};

int main()
{
    Time t1;
    int h, m;
    cout << "Enter time(hh & mm): ";
    cin >> h >> m;
    Time t2(h, m);
    Time t3(t2);
    t1.display();
    t2.display();
    t3.display();
    return 0;
}
