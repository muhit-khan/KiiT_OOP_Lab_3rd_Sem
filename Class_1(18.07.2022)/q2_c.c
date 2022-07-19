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

struct student
{
    char name[30];
    int roll;
    int marks[5];
};

void show_details_with_percentage_range(struct student stu[], int range_init, int range_fin, int number_of_students)
{
    int n = number_of_students;
    struct student_restruct
    {
        char name[30];
        int roll;
        int marks[5];
        int percentage;
    }stu_restruct[n];
    int totalmark = 0;
    float percentage;
    for(int j = 0; j < n; j++)
    {
        for(int i = 0; i < 5; i++)
        {
            totalmark += stu[j].marks[i];
            percentage = (totalmark/500.00)*100.00;
        }
        //stu_restruct[j].name = stu[j].name;
        stu_restruct[j].roll = stu[j].roll;
        //stu_restruct[j].marks = stu[j].marks;
        stu_restruct[j].percentage = percentage;
        totalmark = 0;
    }
    for(int i = 0; i < n; i++)
    {
        if(percentage >= range_init && percentage <= range_fin)
        {
            printf("Name\t: %s\nRoll\t: %d\nMarks\t:\n", stu[i].name, stu_restruct[i].roll);
            for(int v = 0; v < 5; v++)
            {
                printf("\t  Subject-%d: %d\n", v+1, stu[i].marks[v]);
            }
            printf("\n");
        }
    }
}

int main()
{
    int n;
    printf("Enter the number of Student: ");
    scanf("%d", &n);
    int lower_lim, upper_lim;
    struct student stu[n];
    for(int k = 0; k < n; k++)
    {
        printf("Enter Student-%d's name: ", k+1);
        scanf("%s", &stu[k].name);
        printf("Enter Student%d's Roll: ", k+1);
        scanf("%d", &stu[k].roll);
        for(int i = 0; i < 5; i++)
        {
            printf("Enter Subject-%d's Mark of Student-%d: ", i+1, k+1);
            scanf("%d", &stu[k].marks[i]);
        }
        printf("\n");
    }
    printf("Enter lower limit of percentage rage: ");
    scanf("%d", &lower_lim);
    printf("Enter upper limit of percentage rage: ");
    scanf("%d", &upper_lim);
    printf("\n");
    show_details_with_percentage_range(stu, lower_lim, upper_lim, n);
    return 0;
}