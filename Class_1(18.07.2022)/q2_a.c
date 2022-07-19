/*
Q2. WAP to input name, roll number, and marks in 5 subjects for n number of students. Write
functions to:-
a. Find total marks and percentage of all n students.
b. Display details of a student with a given roll number.
c. Display the details for all the students having percentage in a given range.
d. Sort the array in ascending order of marks.
*/

#include<stdio.h>
#include<string.h>
//#define n 2
struct student
    {
        char name[30];
        int roll;
        int marks[5];
    };

void total_mark(struct student stu[], int n)
{
    int totalmark = 0;
    float percentage;
    for(int j = 0; j < n; j++)
    {
        for(int i = 0; i < 5; i++)
        {
            totalmark += stu[j].marks[i];
            percentage = (totalmark/500.00)*100.00;
        }
        printf("\tTotal mark of student-%d: %d\n", j+1, totalmark);
        printf("\tMark percentage of student-%d: %.2f %c\n\n", j+1, percentage, '%');
        totalmark = 0;
    }
}

int main()
{
    int n;
    printf("Enter the number of Student: ");
    scanf("%d", &n);
    struct student stu[n];
    for(int k = 0; k < n; k++)
    {
        printf("\nEnter Student-%d's name: ", k+1);
        scanf("%s", &stu[k].name);
        printf("Enter Student%d's Roll: ", k+1);
        scanf("%d", &stu[k].roll);
        for(int i = 0; i < 5; i++)
        {
            printf("Enter Subject-%d's Mark of Student-%d: ", i+1, k+1);
            scanf("%d", &stu[k].marks[i]);
        }
    }
    total_mark(stu, n);
    return 0;
}