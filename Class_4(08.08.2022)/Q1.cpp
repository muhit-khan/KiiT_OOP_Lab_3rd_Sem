//1. WAP to find the area of a circle, a rectangle, and a triangle, using the concept of function overloading.
//MUHIT KHAN
//Roll: 21052943

#include<iostream>
using namespace std;
int area(int s)
{
    return(s*s);
}
int area(int l,int b)
{
    return(l*b);
}
float area(float r)
{
    return(3.14*r*r);
}
float area(float bs,float ht)
{ 
   return((bs*ht)/2);
}
int main()
{
    int s,l,b;
    float r,bs,ht;
    cout<<"Enter arm of a square:  ";
    cin>>s;
    cout<<"Enter length and width of rectangle:  ";
    cin>>l>>b;
    cout<<"Enter radius of circle:  ";
    cin>>r;
    cout<<"Enter base and height of triangle:  ";
    cin>>bs>>ht;
    cout<<"Area of square is"<<area(s);
    cout<<"\nArea of rectangle is "<<area(l,b);
    cout<<"\nArea of circle is "<<area(r);
    cout<<"\nArea of triangle is "<<area(bs,ht);
    return 0;
}