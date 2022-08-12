//Q7. Write a C++ program to dynamically create two matrixes and perform the matrix addition and multiplication.
//MUHIT KHAN
//21052943


#include <iostream>
using namespace std;

int main()
{
    int r1, c1, r2, c2;

    cout << "Enter rows and columns for first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for second matrix: ";
    cin >> r2 >> c2;
    if (c1!=c2 || r1!=r2)
    {
        cout << "Error! column of first matrix not equal to row of second.";

        cout << "Enter rows and columns for first matrix: ";
        cin >> r1 >> c1;

        cout << "Enter rows and columns for second matrix: ";
        cin >> r2 >> c2;
    }
    else
    {
        int **table1 = new int*[r1];
        for(int i = 0; i < r1; i++)
            table1[i] = new int[c1];
        int **table2 = new int*[r2];
        for(int i = 0; i < r2; i++)
            table2[i] = new int[c2];

        int **mult = new int *[r1];
        for(int i = 0; i < r1; i++)
            mult[i] = new int[c1];

        cout << endl << "Enter elements of matrix 1:" << endl;
        for(int i = 0; i < r1; ++i)
            for(int j = 0; j < c1; ++j)
            {
                cout << "Enter element a" << i + 1 << j + 1 << " : ";
                cin >> table1[i][j];
            }
        cout << endl << "Enter elements of matrix 2:" << endl;
        for(int i = 0; i < r2; ++i)
            for(int j = 0; j < c2; ++j)
            {
                cout << "Enter element b" << i + 1 << j + 1 << " : ";
                cin >> table2[i][j];
            }
        for(int i = 0; i < r1; ++i) //this is the multiplied matrix
            for(int j = 0; j < c2; ++j)
            {
                mult[i][j]=0;
            }
        for(int i = 0; i < r1; ++i) //multiplying the two matrix
            for(int j = 0; j < c2; ++j)
                for(int k = 0; k < c1; ++k)
                {
                    mult[i][j] += table1[i][k] * table2[k][j];
                }
        cout << endl << "Multiplied Output Matrix: " << endl;//showing the multiplied matrix
        for(int i = 0; i < r1; ++i)
            for(int j = 0; j < c2; ++j)
            {
                cout << " " << mult[i][j];
                if(j == c2-1)
                    cout << endl;
            }
        int **add = new int *[r1]; //this is the added matrix
        for(int i = 0; i < r1; i++)
            add[i] = new int[c1];

        for(int i = 0; i < r1; ++i) //adding the two matrix
            for(int j = 0; j < c2; ++j)
                add[i][j] = table1[i][j] + table2[i][j];
                
        cout << endl << "Aded Output Matrix: " << endl;//showing the added matrix
        for(int i = 0; i < r1; ++i)
            for(int j = 0; j < c2; ++j)
            {
                cout << " " << add[i][j];
                if(j == c2-1)
                    cout << endl;
            }

    }
    return 0;
}