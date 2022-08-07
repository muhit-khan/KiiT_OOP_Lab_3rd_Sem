//Q.7. Write a C++ program to dynamically allocate an array of 10 elements and print the sum.
//MUHIT KHAN
//Roll: 21052943

#include<iostream>
using namespace std;
int main() 
{
	int x, n, sum = 0;
	cout << "Enter the number of items: " ;
	cin >>n;
	int *arr = new int(n);
	cout << "Enter " << n << " items: ";
	for (x = 0; x < n; x++)
    {
		cin >> arr[x];
		sum += arr[x];
	}
	cout << "You entered: ";
	for (x = 0; x < n; x++)
    {
		cout << arr[x] << " ";
	}
	cout << " and their sum is: "<<  sum;
	return 0;
}