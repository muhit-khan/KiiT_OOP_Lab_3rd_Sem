// 1. create a class to store i=an int array , overload the insertion and extraction operator to dispaly the array

#include <iostream>
using namespace std;

class IntArr
{
private:
public:
    int arr[100];
    int len;
    IntArr &operator>>(int ar[]) //
    {
        for (int i = 0; i < len; i++)
        {
            arr[i] = ar[i];
        }
    }
    IntArr &operator<<(int ar[]) //
    {
        for (int i = 0; i < len; i++)
        {
            cout << ar[i] << "  " << endl;
        }
    }
};

int main()
{
    class IntArr a;
    int ar[] = {2, 1, 3, 4, 5};
    a.len = 5;
    a.arr >> ar[];
    cout << a.arr[];
    return 0;
}