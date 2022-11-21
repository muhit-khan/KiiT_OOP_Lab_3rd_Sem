#include <iostream>
#include <fstream>
using namespace std;
class Students
{
public:
    char *name;
    char *class_std;
    char sec[50];
    int roll_no;
    int *ptr;
    virtual void GetData()
    {
        name = new char[50];
        class_std = new char[50];
        cout << "\nDEFAULT CONSTRUCTOR CALLED\n"
             << endl;
        cout << "Name of student:  ";
        getchar();
        gets(name);
        cout << "Branch of student:  ";
        gets(class_std);
        cout << "Roll No of student:  ";
        cin >> roll_no;
    }
    virtual void display_students()
    {
        cout << "The details of the student:\n"
             << endl;
        cout << "Name:\t" << name << endl;
        cout << "Branch:\t" << class_std << endl;
        cout << "Roll No:\t" << roll_no << endl;
    }
};
class Lab_marks;
class Assignment;
class Test : public Students
{
public:
    double marks_dsa;
    double marks_oop;
    double marks_hse;
    double marks_de;
    double tot;
    double per;
    void GetData()
    {
        cout << "Marks in DSA:";
        cin >> marks_dsa;
        cout << "Marks in DE:";
        cin >> marks_de;
        cout << "Marks in HSE:";
        cin >> marks_hse;
        cout << "Marks in OOP:";
        cin >> marks_oop;
    }
    friend void TotalGrade(Lab_marks l1, Test t1, Assignment a1);

    Test operator==(Test t1)
    {
        if (per > t1.per)
        {
            cout << "\n\nFirst student has higher percentage than second student:" << endl;
        }
        else
        {
            cout << "\n\nSecond student has higher percentage than First student:" << endl;
        }
        return t1;
    }
};
class Assignment : public Students
{
public:
    int marks_submitting;
    int c;
    Assignment()
    {
        cout << "Has the student submitted his assignment (1 for yes and 2 for no):" << endl;
        cin >> c;
        if (c == 1)
        {
            cout << "Marks in assignment he submitted:" << endl;
            cin >> marks_submitting;
        }
        else
        {
            cout << "No marks allotted" << endl;
        }
    }
    Assignment(int s)
    {
        cout << "Has the student submitted his assignment (1 for yes and 2 for no):" << endl;
        cin >> c;
        if (c == 1)
        {
            marks_submitting += s;
        }
        else
        {
            cout << "No marks allotted" << endl;
        }
    }
    friend void TotalGrade(Lab_marks l1, Test t1, Assignment a1);
    ~Assignment()
    {
        cout << "\nDestructor called";
    }
};
class Lab_marks : public Students
{
public:
    double lab_marks;
    double viva;
    Lab_marks()
    {
        cout << "Enter the marks secured in viva (out of 50):";
        cin >> viva;
        cout << "Enter the lab marks (out of 50):";
        cin >> lab_marks;
    }
    Lab_marks(double viva, double lab_marks)
    {
        cout << "Enter the marks secured in viva (out of 50):";
        cin >> viva;
        cout << "Enter the lab marks (out of 50):";
        cin >> lab_marks;
    }
    ~Lab_marks()
    {
        cout << "\nDestructor called:";
    }
    friend void TotalGrade(Lab_marks l1, Test t1, Assignment a1);
};
void TotalGrade(Lab_marks l1, Test t1, Assignment a1)
{
    t1.tot = t1.marks_de + t1.marks_dsa + t1.marks_hse + t1.marks_oop + l1.viva + l1.lab_marks + a1.marks_submitting;
    t1.per = t1.tot / 6;
    cout << "Percentage of the student is:" << t1.per << endl;
    if (t1.per >= 90 && t1.per < 100)
        cout << "\nStudent's Grade:  A+" << endl;
    if (t1.per >= 80 && t1.per < 90)
        cout << "\nStudent's Grade:  A" << endl;
    if (t1.per >= 70 && t1.per < 80)
        cout << "\nStudent's Grade:  B" << endl;
    if (t1.per >= 60 && t1.per < 70)
        cout << "\nStudent's Grade:  C" << endl;
    if (t1.per >= 50 && t1.per < 60)
        cout << "\nStudent's Grade:  D" << endl;
    if (t1.per >= 40 && t1.per < 50)
        cout << "\nStudent's Grade:  E" << endl;
    if (t1.per < 40)
        cout << "\nStudent has failed" << endl;
}
template <class T>
T TotalGrade2(Lab_marks l1, Test t1, Assignment a1)
{
    T tot;
    tot = t1.marks_de + t1.marks_dsa + t1.marks_hse + t1.marks_oop + l1.viva + l1.lab_marks + a1.marks_submitting;
    T per;
    per = tot / 6;
    cout << "Percentage of the student is:" << per << endl;
    if (per >= 90 && per < 100)
        cout << "\nStudent's Grade:  A+" << endl;
    if (per >= 80 && per < 90)
        cout << "\nStudent's Grade:  A" << endl;
    if (per >= 70 && per < 80)
        cout << "\nStudent's Grade:  B" << endl;
    if (per >= 60 && per < 70)
        cout << "\nStudent's Grade:  C" << endl;
    if (per >= 50 && per < 60)
        cout << "\nStudent's Grade:  D" << endl;
    if (per >= 40 && per < 50)
        cout << "\nStudent's Grade:  E" << endl;
    if (per < 40)
        cout << "\nStudent has failed" << endl;
    return per;
}

int main()
{
    Students *s = new Students;
    s->GetData();
    s->display_students();
    Test t1;
    s = &t1;
    s->GetData();
    Assignment a1;
    Lab_marks l1;
    cout << "\n\n*******Grade and percentage by using friend function*****\n\n"
         << endl;
    TotalGrade(l1, t1, a1);
    cout << "\n\n*******Grade and percentage by using template function*****\n"
         << endl;
    TotalGrade2<float>(l1, t1, a1);

    Students *s2 = new Students;
    s2->GetData();
    s2->display_students();
    Test t2;
    s2 = &t2;
    s2->GetData();
    Assignment a2;
    Lab_marks l2;
    cout << "\n\n*******Grade and percentage by using friend function*****\n\n"
         << endl;
    TotalGrade(l2, t2, a2);
    cout << "\n\n*******Grade and percentage by using template function*****\n"
         << endl;
    TotalGrade2<float>(l2, t2, a2);

    t1 == t2;

    ofstream obj;
    obj.open("Student.txt");
    obj << t1.marks_de << endl;
    obj << t1.marks_dsa << endl;
    obj << t1.marks_oop << endl;
    obj << t1.marks_hse << endl;
    obj << a1.marks_submitting << endl;
    obj << l1.lab_marks + l1.viva << endl;
    double per2, tot2;
    tot2 = t1.marks_de + t1.marks_dsa + t1.marks_hse + t1.marks_oop + l1.viva + l1.lab_marks + a1.marks_submitting;
    per2 = tot2 / 6;
    obj << per2 << endl;
}