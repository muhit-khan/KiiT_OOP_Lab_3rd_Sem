// WAP in c++ to enter any number and then reverse and display it

#include <iostream>
using namespace std;
int reverse_num(int n)
{
    string a = to_string(n);
    for (int i = 0, j = a.length() - 1; i < a.length() / 2; i++, j--)
    {
        char temp = a[j];
        a[j] = a[i];
        a[i] = temp;
    }
    return stoi(a);
}

int main()
{
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    cout << "Reversed integer: " << reverse_num(num) << endl;
    return 0;
}