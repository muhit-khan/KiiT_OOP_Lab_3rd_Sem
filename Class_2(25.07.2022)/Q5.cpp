//Q.5. Modify the program 4) to store marks in 10 subjects. Calculate the total marks and
//percentage of a student and display it.
//Muhit Khan

#include <iostream>
using namespace std;

class student
{
    private:
        char  name[30];
        int   rollNo;
        int   marks[10];
        int   total;
        float perc;
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
    total = 0;
    for(int i = 0; i < 10; i++)
    {
        cout << "Enter mark of Subject "<< i+1 <<": ";
        cin >> marks[i];
        total += marks[i];
    }
    perc = (float)total/1000.00*100.00;
}
void student::putDetails(void)
{
    cout << "Name:"<< name << "\nRoll:" << rollNo << "\nTotal:" << total <<"\nPercentage: "<<perc<<"%" ;
}
 
int main()
{
    int n, m;
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