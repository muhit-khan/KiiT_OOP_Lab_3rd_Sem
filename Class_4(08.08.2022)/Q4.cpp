//4. WAP to find the square and cube of a number using an inline function.
//MUHIT KHAN
//Roll: 21052943

#include<iostream>
#include<conio.h>
using namespace std;
inline int sqr(int num)
{
    return num*num;
}
inline int qub(int num)
{
    return num*num*num;
}

int main()
{
    int a;
    cout<<"Enter the number: ";
    cin>>a;
    cout<<"\nSquare of the number is "<<sqr(a);
    cout<<"\nCube of the number is "<<qub(a);
    return 0;
}