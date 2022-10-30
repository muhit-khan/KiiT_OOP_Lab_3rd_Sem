// 3. crt a class whuch will allocate the memory for a string through dynamic constractor ,
// overload the binary + operator to concreate two string

#include <iostream>
#include <string.h>
using namespace std;
class String
{
private:
    char *str;
    int len;

public:
    String(string s)
    {
        str = new char[s.length()];
        len = s.length();
        for (int i = 0; i < s.length(); i++)
        {
            str[i] = s[i];
        }
    }
    void show()
    {
        for (int i = 0; i < len; i++)
        {
            cout << str[i];
        }
    }
    String operator+(String &obj)
    {
        const char temp = str;
        delete str;
        str = new char[len + obj.len];
        strcat(str, temp);
        strcat(str, obj.str);
    }
};

int main()
{
    String a("Coding is love. ");
    a.show();
    String b("But I don't Code.");

    a + b;
    a.show();
    return 0;
}