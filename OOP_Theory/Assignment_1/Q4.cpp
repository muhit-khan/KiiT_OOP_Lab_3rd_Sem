//4.  Write a program in C++ to calculate the power of any number using recursion.
//MUHIT KHAN
//Roll: 21052943

#include<iostream>
using namespace std;

int pow(int base, int power)
{
    if(power != 0)
        return base * pow(base, power - 1);
    return 1;
}

int main()
{
    int base, power;
    cout<<"Enter base and power: ";
    cin>>base>>power;

    cout<<"Result: "<<pow(base, power);
    return 0;
}