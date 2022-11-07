/*1. Design a generic stack class(template class),
which can be used to create integer, character or floating point stack
objects. Provide all necessary data members and member functions
 (push, pop, display & default constructor) tooperate on the stack.
*/
// MUHIT KHAN(21052943)

#include <iostream>
using namespace std;
#define max 5

template <class T>
class STACK
{
public:
    T Stack[max];
    int top = -1;

    void push()
    {
        T x;
        cout << "Enter the element: ";
        cin >> x;
        if (top == max - 1)
        {
            cout << "Insertion not possible, stack full";
        }
        else
        {
            top++;
            Stack[top] = x;
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Deletion not possible, stack empty";
        }
        else
        {
            cout << "\nElement deleted from stack:" << Stack[top] << endl
                 << endl;
            top--;
        }
    }

    void display()
    {
        if (top == -1)
        {
            cout << "Stack Empty";
        }
        else
        {
            cout << "Elements of stack are:" << endl;
            for (int i = top; i >= 0; i--)
            {
                cout << Stack[i] << endl;
            }
        }
    }
};

int main()
{

    STACK<char> obj1;

    int option;
    do
    {
        cout << "\n****MAIN MENU****";
        cout << "\n 1. Push element";
        cout << "\n 2. Pop element";
        cout << "\n 3. Display elements";
        cout << "\n 4. EXIT";
        cout << "\n Enter your option: ";
        cin >> option;
        cout << "\n\n";

        switch (option)
        {
        case 1:
            obj1.push();
            break;

        case 2:
            obj1.pop();
            break;

        case 3:
            obj1.display();
            break;
        }
    } while (option != 4);
    return 0;
}