#include <iostream>
#include <string.h>

using namespace std;

class String
{
public:
    char str[200];

    String() {}
    String(char str[])
    {
        strcpy(this->str, str);
    }
    String operator+(String &S2)
    {
        String S3;
        strcat(this->str, S2.str);
        strcpy(S3.str, this->str);
        return S3;
    }
};

int main()
{
    char str1[100], str2[100];
    cout << "Input 1st string: ";
    gets(str1);
    cout << "Input 2nd string: ";
    gets(str2);

    String a1(str1);
    String a2(str2);
    String a3;

    a3 = a1 + a2;
    cout << "Concatenation: " << a3.str;

    return 0;
}