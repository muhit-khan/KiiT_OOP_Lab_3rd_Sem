/*Q5. Write the code of copy constructor demonstrating the following:
    a)Shallow copy
    b)Deep copy  */

#include <iostream>
using namespace std;

class box
{
private:
    int *length;
    int *breadth;
    int *height;

public:
    box(int l, int b, int h)
    {
        length = new int;
        *length = l;
        breadth = new int;
        *breadth = b;
        height = new int;
        *height = h;
    }
    void show_data()
    {
        cout << " Length  = " << *length << "\n Breadth = " << *breadth << "\n Height  = " << *height << endl;
    }
    box(box &sample)
    {
        length = new int;
        *length = *(sample.length);
        breadth = new int;
        *breadth = *(sample.breadth);
        height = new int;
        *height = *(sample.height);
    }
    ~box()
    {
        delete length;
        delete breadth;
        delete height;
    }
};
int main()
{
    int l, b, h;
    cout << "Enter the Length,Breadth and Height respectively: ";
    cin >> l >> b >> h;
    box first(l, b, h);
    cout << "Entered values: ";
    first.show_data();

    box second = first;
    cout << "\nThis is an example of shallow copy" << endl;
    second.show_data();

    box third(first);
    cout << "\nThis is an example of deep copy" << endl;
    third.show_data();

    return 0;
}