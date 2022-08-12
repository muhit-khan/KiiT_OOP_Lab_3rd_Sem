//5. Write a program in C++ to Print Fibonacci Series using recursion.
//MUHIT KHAN
//Roll: 21052943

#include<iostream>
#include <bits/stdc++.h>
using namespace std;

// Creating class for Fibonacci.
class Fibonacci 
{
    public:
    	int a, b, c;
    	void generate(int n)
        {
        	a = 0;
        	b = 1;
        	cout << a << " " << b;
        	// Using for loop for continuing
        	// the Fibonacci series.
        	for (int i = 1; i <= n - 2; i++) {
        		// Addition of the previous two terms
        		// to get the next term.
        		c = a + b;
        		cout << " " << c;
        		// Converting the new term
        		// into an old term to get
        		// more new terms in series.
        		a = b;
        		b = c;
        	}
        }
};

// Driver code
int main()
{
	int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
	Fibonacci fib;
	fib.generate(n);
	return 0;
}
