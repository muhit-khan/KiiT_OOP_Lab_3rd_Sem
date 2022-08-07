//Q3. Write a C++ program to capitalize the first letter of each word of a given string. Words mustbe separated by only one space.
//MUHIT KHAN
//Roll: 21052943

#include <iostream>
#include <string>
using namespace std;

string Capitalize_first_letter(string text)
{
	for (int x = 0; x < text.length(); x++)
	{
		if (x == 0)
		{
			text[x] = toupper(text[x]);
		}
		else if (text[x - 1] == ' ')
		{
			text[x] = toupper(text[x]);
		}
	}
	return text;
}
int main()
{
	string s;
    cout << "Enter the string: ";
    getline(cin, s);
    cout << "Restructured string: "	<< Capitalize_first_letter(s);
	return 0;
}