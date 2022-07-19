/*
Q2. WAP to input name, roll number, and marks in 5 subjects for n number of students. Write
functions to:-
a. Find total marks and percentage of all n students.
b. Display details of a student with a given roll number.
c. Display the details for all the students having percentage in a given range.
d. Sort the array in ascending order of marks.
*/
//Muhit Khan(Roll: 21052943)

#include<stdio.h>
#include<string.h>

struct student
{
    char name[30];
    int roll;
    int marks[5];
};

void show_details_with_sorted_mark(struct student stu[], int n)
{
    int totalmark = 0;
    float percentage;
    int total_mark_node[n], total_mark_sorted[n];
    for(int j = 0; j < n; j++)
    {
        for(int i = 0; i < 5; i++)
        {
            totalmark += stu[j].marks[i];
            percentage = (totalmark/500.00)*100.00;
        }
        total_mark_node[j] = totalmark;
        total_mark_sorted[j] = totalmark;
        totalmark = 0;
    }
    for (int i = 0; i < n; i++)
    {     
        for (int j = i+1; j < n; j++)
        {     
            if(total_mark_sorted[i] > total_mark_sorted[j])
            {    
                int temp =total_mark_sorted[i];    
                total_mark_sorted[i] =total_mark_sorted[j];    
                total_mark_sorted[j] = temp;    
            }     
        }     
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(total_mark_sorted[i] == total_mark_node[j])
            {
                printf("Name\t: %s\nRoll\t: %d\nMarks\t:\n", stu[j].name, stu[j].roll);
                for(int v = 0; v < 5; v++)
                {
                    printf("\t  Subject-%d: %d\n", v+1, stu[j].marks[v]);
                }
                printf("\t  Total Mark: %d\n", total_mark_node[j]);
                printf("\n");
            }
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
    show_details_with_sorted_mark(stu, n);
    return 0;
}