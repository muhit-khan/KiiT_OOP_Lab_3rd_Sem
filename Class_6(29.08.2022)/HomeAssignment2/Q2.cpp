// WAP in c++ to enter any array and then reverse and display it

#include <iostream>
using namespace std;

int main()
{
    int s;
    cout << "Enter size of array: ";
    cin >> s;
    int arr[s];
    cout << "Enter elements: ";
    for (int i = 0; i < s; i++)
        cin >> arr[i];

    for (int i = 0, j = s - 1; i < s / 2; i++, j--)
    {
        int temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
    }

    cout << "Reversed array: ";
    for (int i = 0; i < s; i++)
        cout << arr[i] << " ";

    return 0;
}