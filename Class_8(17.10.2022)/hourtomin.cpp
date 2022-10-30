#include <iostream>
using namespace std;

class min
{
public:
    int m;
    min(int k)
    {
        m = k;
    }
    void diplay()
    {
        cout << "Minute: " << m << endl;
    }
};
class hour : public min
{
public:
    int h;
    hour(class min x)
    {
        h = x.m / 60;
    }
    void Diplay()
    {
        cout << "Hour: " << h << endl;
    }
};
int main()
{
    class min a(120);
    class hour b(a);
    a.display();
    b.Display();

    return 0;
}