//Write a program in C++ to calculate the sum of numbers from 1 to n using recursion.
//Muhit Khan
//Roll: 21052943

#include<iostream>
using namespace std;

int sum(int n)
{
    if(n != 0)
        return n + sum(n - 1);
    return 0;
}

int main()
{
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;

    cout<<"Sum: "<<sum(n);
    return 0;
}