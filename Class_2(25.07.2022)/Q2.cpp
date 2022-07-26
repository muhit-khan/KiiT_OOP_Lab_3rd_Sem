//Q.2. Write a C++ program to find prime numbers between 1-1000. [Create a prime() function]. 
//Muhit Khan

#include <iostream>
using namespace std;

void prime(int init, int fin)
{
    cout<<"\nPrime Numbers: ";
    for(int n = init; n <= fin; n++)
    {
        bool is_prime = true;
        if (n == 0 || n == 1)
        {
            is_prime = false;
        }
        for (int i = 2; i <= n / 2; ++i)
        {
            if (n % i == 0)
            {
                is_prime = false;
                break;
            }
        }
        if(is_prime == true)
            cout<<n<<", ";
    }  
}
int main()
{
    int init, fin;
    cout<<"Enter the lower integer: ";
    cin>>init;
    cout<<"Enter the upper integer: ";
    cin>>fin;
    prime(init, fin);
    return 0;
}
