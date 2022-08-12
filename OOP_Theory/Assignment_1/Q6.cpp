//6. Write a program in C++ to count the digits of a given number using recursion.
//MUHIT KHAN
//Roll: 21052943

#include<iostream>
using namespace std;

int digitNUM(int num)
{
    if(num == 0)
        return 0;
    return 1 + digitNUM(num/10);
}

int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<"Number of digit: "<<digitNUM(num);
    return 0;
}