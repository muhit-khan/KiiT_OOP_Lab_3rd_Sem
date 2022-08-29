// 1. WAP to print the largest private data member of three classes.

#include <iostream>
using namespace std;
class LargestNumber
{
private:
    int num1, num2, num3;

public:
    void setvalue(int n1, int n2, int n3)
    {
        num1 = n1;
        num2 = n2;
        num3 = n3;
    }
    int largest()
    {
        return ((num1 > num2) ? num1 : num2) > num3 ? ((num1 > num2) ? num1 : num2) : num3;
    }
};
int main()
{
    LargestNumber L;
    int n1, n2, n3;
    cout << "\nEnter three numbers: ";
    cin >> n1 >> n2 >> n3;
    L.setvalue(n1, n2, n3);
    cout << "Largest member is: " << L.largest();
    return 0;
}