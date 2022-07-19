//1.WAP to input name, roll number, and marks in 5 subjects for a student, and display it.
//Muhit Khan(Roll: 21052943)
#include<stdio.h>
int main()
{
    struct student
    {
        char name[30];
        int roll;
        int marks[5];
    };

    struct student stu1;
    printf("Enter Student's name: ");
    scanf("%s", &stu1.name);
    printf("Enter Student's Roll: ");
    scanf("%d", &stu1.roll);
    for(int i = 0; i < 5; i++)
    {
        printf("Enter Subject-%d's Mark: ", i+1);
        scanf("%d", &stu1.marks[i]);
    }
    printf("Name\t: %s\nRoll\t: %d\nMarks\t:\n", stu1.name, stu1.roll);
    for(int i = 0; i < 5; i++)
    {
        printf("\t  Subject-%d: %d\n", i+1, stu1.marks[i]);
    }
    return 0;
}