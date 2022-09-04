// Q5. Input any string and reverse it

#include <iostream>
using namespace std;

int main()
{
    string a;
    cout << "Enter 1st string: ";
    getline(cin, a);
    for (int i = 0, j = a.length() - 1; i < a.length() / 2; i++, j--)
    {
        char temp = a[j];
        a[j] = a[i];
        a[i] = temp;
    }
    cout << "Reversed string: " << a << endl;
    return 0;
}