/*Q.2. Write a C++ program to swap two numbers using the following:
a. Call by value */
//MUHIT KHAN
//Roll: 21052943

#include <iostream>  
using namespace std;
void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main()  
{  
    int a, b;
    cout<<"Enter value of a and b: ";
	cin>> a>> b;     
    cout<<"Before swap, a = "<<a<<" & b = "<<b<<endl;      
    swap(a, b);
    cout<<"After swap, a= "<<a<<" & b= "<<b<<endl;      
    return 0;  
}