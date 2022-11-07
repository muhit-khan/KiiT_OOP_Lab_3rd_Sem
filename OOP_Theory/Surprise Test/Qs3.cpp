/*3. Create a template class array that reads and prints the elements
for which memory is allocated dynamically. Include the member functions
in the class to perform inserting, deleting, searching and sorting on the array.
Call the functions for a float array.
*/
// MUHIT KHAN(21052943)

#include <iostream>
using namespace std;

template <class T>
class ARRAY
{
private:
    T *arr;
    int Size;

public:
    void Insert()
    {
        int n;
        cout << "Enter the size of the array: ";
        cin >> n;
        Size = n;
        arr = new T[n];
        cout << "Enter the elements of the array: ";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
    };
    void Search()
    {
        int flag = -1;
        T val;
        cout << "Enter the element you want to search: ";
        cin >> val; // searching for the element
        for (int i = 0; i < Size; i++)
        {
            if (arr[i] == val)
            {
                flag = i;
                break;
            }
        }
        if (flag == -1)
            cout << "Element not found!" << endl;
        else
            cout << "Your searched item is at position: " << flag + 1 << endl;
    };
    void Delete()
    {
        int flag = -1;
        T val;
        cout << "Enter the element you want to delete: ";
        cin >> val; // deleting the element
        for (int i = 0; i < Size; i++)
        {
            if (arr[i] == val)
            {
                flag = i;
                break;
            }
        }
        if (flag == -1)
            cout << "Element not found!" << endl;

        else
        {
            for (int i = flag; i < Size - 1; i++)
            {
                arr[i] = arr[i + 1];
            }
            // free(arr[Size]);
            Size--;
            cout << "Element deleted!" << endl;
        }
    };
    void Display()
    {
        if (Size == -1)
            cout << "Array is empty!" << endl;

        else
        {
            cout << "Elements are: ";
            for (int i = 0; i < Size; i++)
            {
                cout << arr[i] << " ";
            }
        }
    };
};

int main()
{
    ARRAY<int> obj1;
    int option;
    do
    {
        cout << "\n****MAIN MENU****";
        cout << "\n 1. Insert elements";
        cout << "\n 2. Delete an element";
        cout << "\n 3. Search an element";
        cout << "\n 4. Display the elements";
        cout << "\n 5. EXIT";
        cout << "\n Enter your option: ";
        cin >> option;

        switch (option)
        {
        case 1:
            obj1.Insert();
            break;

        case 2:
            obj1.Delete();
            break;

        case 3:
            obj1.Search();
            break;

        case 4:
            obj1.Display();
            break;
        }

    } while (option != 5);
    return 0;
}
