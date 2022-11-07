/*2. Write a program using function template to find out the largest
element in an array. Using this template, find the largest element in an
 integer and a float array.*/
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
    T LargestElem()
    {
        T largest = 0;
        for (int i = 0; i < Size; i++)
        {
            if (arr[i] > largest)
            {
                largest = arr[i];
            }
        }
        return largest;
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
        cout << "\n 2. See largest element";
        cout << "\n 3. Display the elements";
        cout << "\n 4. EXIT";
        cout << "\n Enter your option: ";
        cin >> option;
        cout << "\n\n";

        switch (option)
        {
        case 1:
            obj1.Insert();
            break;

        case 2:
            cout << "Largest element in the Array: " << obj1.LargestElem() << endl;
            break;

        case 3:
            obj1.Display();
            break;
        }
    } while (option != 4);
    return 0;
}
