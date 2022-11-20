#include <iostream>
#include <stdlib.h>
using namespace std;

template <class T>
class TC
{
private:
    T a, b;

public:
    T mult, div;
    TC(T ai, T bi)
    {
        a = ai;
        b = bi;
    };
    TC operator*(TC const &obj)
    {
        mult = a * b;
    }
    TC operator/(TC const &obj)
    {
        div = a / b;
    }
};

int main()
{
    TC<int> i(6, 2);
    i *i;
    i / i;
    cout << "\nInteger Mult: " << i.mult << endl
         << "Integer Div: " << i.div << endl;
    TC<double> d(6.0, 2.0);
    d *d;
    d / d;
    cout << "\nDouble Mult: " << d.mult << endl
         << "Double Div: " << d.div << endl;
    TC<float> f(6.0, 2.0);
    f *f;
    f / f;
    cout << "\nFloat Mult: " << f.mult << endl
         << "Float Div: " << f.div << endl;
    return 0;
}
