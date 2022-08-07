/*Q.2. Write a C++ program to swap two numbers using the following:
b. Call by address (using pointer)
c. Call of Reference */
//MUHIT KHAN
//Roll: 21052943

#include <iostream>
using namespace std;

void swap(int *first, int *second)
{
    int temp;
    temp = *first;
    *first = *second;
    *second = temp;
}
int main()
{
    int a, b;
    cout<<"Enter value of a and b: ";
    cin >> a >> b;
    cout << "Before swap, a = " << a << " & b = " << b << endl;
    swap(&a, &b);
    cout << "After swap, a = " << a << " & b = " << b << endl;
    return 0;
}