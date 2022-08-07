//Q4. Write a C++ program to find the largest word in a given string.
//MUHIT KHAN
//21052943

#include<stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

void MaxLengthWords(string input, string &maxWord)
{
	int si = 0, ei = 0;
	int min_length = input.length(), max_length = 0, max_start_index = 0;
	while (ei <= input.length())
	{
		if (ei < input.length() && input[ei] != ' ')
			ei++;
		else
		{
			int curr_length = ei - si;
			if (curr_length > max_length)
			{
				max_length = curr_length;
				max_start_index = si;
			}
			ei++;
			si = ei;
		}
	}
	maxWord = input.substr(max_start_index, max_length);
}
int main()
{
	string s, maxWord;
    cout << "Enter the string: ";
    getline(cin, s);
	MaxLengthWords(s, maxWord);
	cout << "Maximum length word: "	<< maxWord << endl;
    return 0;
}