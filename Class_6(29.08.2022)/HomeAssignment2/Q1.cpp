// WAP in c++ to input 2 string and show the union.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string removeDuplicate(string str)
{
    int counter = 0, i = 0, size = str.size(), x, length = 0;
    while (i < size)
    {
        x = str[i] - 97;
        if ((counter & (1 << x)) == 0)
        {
            str[length] = 'a' + x;
            counter = counter | (1 << x);
            length++;
        }
        i++;
    }
    return str.substr(0, length);
}
int main()
{
    string a, b;
    cout << "Enter 1st string: ";
    getline(cin, a);
    cout << "Enter 2nd string: ";
    getline(cin, b);
    string UnionX = removeDuplicate(a + b);
    cout << "Union of strings: ";
    for (int i = 0; i < UnionX.length(); i++)
        cout << UnionX[i] << " ";
}