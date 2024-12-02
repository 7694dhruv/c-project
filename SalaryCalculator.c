//Gross Salary Calculator
//Create a program that calculates the gross salary by adding percentages of HRA, DA, and TA to
// the base salary as chosen by the user.

#include<stdio.h>

int main(){
    int base_salary, hra, da, ta,gross_salary;

    printf("Enter your base salary:");
    scanf("%d",&base_salary);

    hra=base_salary*10/100;
    da=base_salary*5/100;
    ta=base_salary*8/100;

    gross_salary= base_salary+hra+da+ta;

    printf("\n your hra total is :%d",hra);
    printf("\n your da total is :%d",da);
    printf("\n your ta total is :%d",ta);
    printf("\n\n your gross salary is :%d",gross_salary);
    return 0;
}
