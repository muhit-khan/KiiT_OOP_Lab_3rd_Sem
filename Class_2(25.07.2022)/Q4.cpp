//Q.4. Create a class which stores name, roll number and total marks for a student. Input the data for a student and display it.//Muhit Khan// 

#include <iostream>
using namespace std;

class student
{
    private:
        char  name[30];
        int   rollNo;
        int   total;
    public:
        void getDetails(void);
        void putDetails(void);
};
void student::getDetails(void)
{
    cout << "Enter name: " ;
    cin >> name;
    cout << "Enter roll number: ";
    cin >> rollNo;
    cout << "Enter total marks: ";
    cin >> total;
}
void student::putDetails(void)
{
    cout << "Name:"<< name << "\nRoll:" << rollNo << "\nTotal:" << total;
}
 
int main()
{
    int n,m;
    cout << "Enter total number of students: ";
    cin >> n;
    student std[n]; 
    for(m=0;m< n; m++)
    {
        cout << "\nEnter details of student " << m+1 << ":\n";
        std[m].getDetails();
    }
    cout << endl;
    for(m = 0; m< n; m++)
    {
        cout << "\n\nDetails of student " << (m+1) << ":\n";
        std[m].putDetails();
    }
    return 0;
}