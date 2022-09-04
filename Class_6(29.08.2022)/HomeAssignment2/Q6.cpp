// WAP in c++ to enter any array and then reverse and display it

#include <iostream>
using namespace std;

int main()
{
    int s, sum = 0;
    cout << "Enter size of array: ";
    cin >> s;
    int arr[s];
    cout << "Enter elements: ";
    for (int i = 0; i < s; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << "Sum of array: " << sum << endl;
    return 0;
}