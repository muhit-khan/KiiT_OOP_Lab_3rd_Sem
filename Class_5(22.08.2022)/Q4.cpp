/*4. Create a class which stores name, roll number and total marks for a student. Input data for n
students. Find the average marks scored by n students, store it as a data member of the class and
display it using a function which may be called without object.*/

#include <iostream>
using namespace std;

class student
{
private:
    string name;
    int rollNo;

public:
    int total;
    void getDetails(void);
    void putDetails(void);
};
void student::getDetails(void)
{
    cout << "Name: ";
    cin >> name;
    cout << "Roll number: ";
    cin >> rollNo;
    cout << "Total marks: ";
    cin >> total;
}
void student::putDetails(void)
{
    cout << "Name:" << name << "\nRoll:" << rollNo << "\nTotal:" << total;
}
void average_marks(student x[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += x[i].total;
    double average = double(sum) / (double)n;
    cout << "\n\nAverage mark is " << average;
}

int main()
{
    int n, m;
    cout << "Enter total number of students: ";
    cin >> n;
    student std[n];
    for (m = 0; m < n; m++)
    {
        cout << "\nEnter details of student " << m + 1 << ":\n";
        std[m].getDetails();
    }
    cout << endl;
    for (m = 0; m < n; m++)
    {
        cout << "\n\nDetails of student " << (m + 1) << ":\n";
        std[m].putDetails();
    }
    average_marks(std, n);
    return 0;
}