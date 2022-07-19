/*
3. WAP to enter id, name, age, and basic salary of n number of employees. Calculate the
gross salary of all the employees and display it along with all other details in a tabular
form, using the pointer to structure.
[Gross salary= Basic salary + DA + HRA,
DA = 80% of Basic salary
HRA=10% of Basic salary]
*/
//Muhit Khan(Roll: 21052943)
#include<stdio.h>
#include<math.h>
#include<string.h>

struct employe
{
    int emp_id;
    char name[20];
    int age;
    int basic_salary;
};
int total_salary(int basic_salary)
{
    float final_salary = basic_salary*0.80 + basic_salary*0.10 + basic_salary;
    return final_salary;
}

int main()
{
    int n;
    printf("Enter the number of employee: ");
    scanf("%d", &n);
    struct employe employes[n];
    for(int i = 0; i < n; i++)
    {
        printf("\nEnter the Employe-%d's ID\t\t: ", i+1);
        scanf("%d", &employes[i].emp_id);
        printf("Enter the Employe-%d's Name\t\t: ", i+1);
        scanf("%s", &employes[i].name);
        printf("Enter the Employe-%d's Age\t\t: ", i+1);
        scanf("%d", &employes[i].age);\
        printf("Enter the Employe-%d's Basic Salary\t: $", i+1);
        scanf("%d", &employes[i].basic_salary);
    }
    printf("\n\n");
    for(int i = 0; i < n; i++)
    {
        printf("\t\t\tEmploye-%d's ID\t\t\t: %d", i+1, employes[i].emp_id);
        printf("\n\t\t\tEmploye-%d's Name\t\t: %s", i+1, employes[i].name);
        printf("\n\t\t\tEmploye-%d's Age\t\t\t: %d", i+1, employes[i].age);
        printf("\n\t\t\tEmploye-%d's Basic Salary\t: $%d", i+1, employes[i].basic_salary);
        printf("\n\t\t\tEmploye-%d's Total Salary\t: $%.2f", i+1, total_salary(employes[i].basic_salary));
        printf("\n\n");
    }
    return 0;
}