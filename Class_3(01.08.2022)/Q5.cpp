//Q.5. Write a C++ program to sort characters (numbers and punctuation symbols are not included) in a string.
//MUHIT KHAN
//Roll: 21052943

#include<bits/stdc++.h>
#include <iostream>
#include <string.h>
using namespace std;

void sortString(string &str)
{
sort(str.begin(), str.end());
cout << str;
}
int main()
{
	string s;
    cout << "Enter the string: ";
    getline(cin, s);
	sortString(s);
	return 0;
}