/*3. WAP to write 10 strings into a file and display them from file.*/
// MUHIT KHAN(21052943)

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char s[500];
    fstream file;
    file.open("sample.txt", ios::out);
    if (!file)
    {
        cout << "Error in creating file!!!" << endl;
        return 0;
    }
    cout << "File created successfully." << endl;
    // write text into file
    cout << "Write into file:\t";
    gets(s);
    file << s;
    file.close();
    file.open("sample.txt", ios::in);
    if (!file)
    {
        cout << "Error in opening file!!!" << endl;
        return 0;
    }
    char ch;
    cout << "File content:\n";
    while (!file.eof())
    {
        file >> ch;
        cout << ch;
    }
    file.close();
    return 0;
}