// 4. wap to add two object of time class, overload the operator == to compare two object and
// to display wheather they are equal or not

#include <iostream>
using namespace std;

class TIME
{
    int hr, min;

public:
    TIME()
    {
    }
    TIME(int r, int i)
    {
        hr = r;
        min = i;
    }
    TIME operator+(TIME c3)
    {
        TIME c;
        c.hr = hr + c3.hr;
        c.min = min + c3.min;
        return c;
    }

    int operator==(TIME c1)
    {
        if (hr == c1.hr && min == c1.min)
            return 1;
        else
            return 0;
    }

    void show()
    {
        cout << hr << "," << min;
    }

    void operator=(TIME b)
    {
        hr = b.hr;
        min = b.min;
    }
};

int main()
{
    TIME c1(5, 5), c2(5, 5), c3(5, 6), c4;
    cout << "\nequal to operator over loading\n";
    if ((c1 == c2) == 1)
        cout << "Equal\n";
    else
        cout << "Not Equal\n";
    if ((c1 == c3) == 1)
        cout << "Equal\n";
    else
        cout << "Not Equal\n";

    cout << "\n\nplus operator overloading to add 2 objects\n";
    c4 = c2 + c3;
    c4.show();
}