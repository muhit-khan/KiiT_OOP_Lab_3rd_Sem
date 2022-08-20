//2. WAP to find the volume of a sphere, a cylinder, and a cuboid, using function overloading.
//MUHIT KHAN
//Roll: 21052943


#include<iostream>
using namespace std;
float vol(float r1)
{
    return((4*3.14*r1*r1*r1)/3);
}
float vol(int r,int h)
{
    return(3.14*r*r*h);
}
int vol(int a)
{
    return(a*a*a);
}
int main()
{
    int r,h,a;
    float r1;
    cout<<"Enter radius of sphere: ";
    cin>>r1;
    cout<<"Enter radius and height of a cylinder: ";
    cin>>r>>h;
    cout<<"Enter side of cuboid: ";
    cin>>a;
    cout<<"\nVolume of sphere is "<<vol(r1);
    cout<<"\nVolume of cylinder is "<<vol(r,h);
    cout<<"\nVolume of cube is "<<vol(a);
    return 0;
}
