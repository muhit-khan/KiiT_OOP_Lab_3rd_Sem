// WAP in c++ to enter any array and display sum of its elements

#include <iostream>
using namespace std;
int sum(int arr[])
{
    int sum = 0;
    for (int i = 0; arr[i] != NULL; i++)
        sum += arr[i];
    return sum;
}
int main()
{
    int s;
    cout << "Enter size of array: ";
    cin >> s;
    int arr[s];
    cout << "Enter elements: ";
    for (int i = 0; i < s; i++)
        cin >> arr[i];
    cout << "Sum of array: " << sum(arr);
    return 0;
}