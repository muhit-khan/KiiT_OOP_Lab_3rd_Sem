/*Create a class with an integer data member. Include functions for input and output in class.
Count the number of times each function is called and display it.*/

#include <iostream>
using namespace std;
class Data
{
private:
    int x;
    static int funInput;
    static int funOutput;

public:
    void input()
    {
        cout << "Enter an integer: ";
        cin >> x;
        funInput++;
    }
    void output()
    {

        cout << "You've entered: " << x << endl;
        funOutput++;
    }
    void display()
    {
        cout << "\n'Input' & 'Output' function are called  " << funInput << " & " << funOutput << " times respectively.\n";
    }
};
int Data::funInput = 0;
int Data::funOutput = 0;
int main()
{
    Data d;
    d.input();
    d.output();
    d.input();
    d.output();
    d.display();
    return 0;
}