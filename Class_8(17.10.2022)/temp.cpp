#include <iostream>
#include <string.h>
using namespace std;

class String
{
public:
    char str[20];

public:
    void get()
    {
        cout << "\nEnter String:   ";
        cin >> str;
    }
    void display()
    {
        cout << str;
    }
    String operator+(String x)
    {
        String s;
        strcat(str, x.str);
        strcpy(s.str, str);
        return s;
    }
};
int main()
{
    String str1, str2, str3;

    str1.get();
    str2.get();

    cout << "\nFirst String is:  ";
    str1.display();
    cout << "\nSecond String is:  ";
    str2.display();

    str3 = str1 + str2;
    cout << "\nConcatenated String is:  ";
    str3.display();

         return 0;
}