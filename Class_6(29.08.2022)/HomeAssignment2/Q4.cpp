// WAP in c++ to input 2 arrays and merge them sequentially

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void getArray(int arr[], int size)
{
    cout << "Enter elements: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];
}
void sequentialMerge(int arr1[], int arr2[], int n1, int n2, int arr3[])
{
    int i;
    for (i = 0; i < n1; i++)
        arr3[i] = arr1[i];
    for (int j = i + 1, k = 0; k < n2; j++, k++)
        arr3[j] = arr2[k];
    sort(arr3, arr3 + (n1 + n2));
}

int main()
{
    int s1, s2;
    cout << "Enter 1st array size: ";
    cin >> s1;
    int arr1[s1];
    getArray(arr1, s1);

    cout << "Enter 2nd array size: ";
    cin >> s2;
    int arr2[s2];
    getArray(arr2, s2);

    int arr3[s1 + s2];
    sequentialMerge(arr1, arr2, s1, s2, arr3);
    cout << "Array after merging: ";
    for (int i = 0; i < s1 + s2; i++)
        cout << arr3[i] << " ";

    return 0;
}