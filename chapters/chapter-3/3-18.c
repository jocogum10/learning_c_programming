/*Develop a program that will determine the gross pay for each of several employees.
The company pays "straight line" for the first 40 hours worked by each employee and pays
"time-and-a-half" for all hours worked in excess of 40 hours. You are given a list of the
employees of the company, the number of hours each employee worked last week and the
hourly rate of each employee. Your program should put this information for each employee,
and should determine and display the employee's gross pay. Here is a sample input/output dialog:*/


#include<stdio.h>

int main(){

int number_of_hours = 0;
float hourly_rate = 0, salary = 0;

printf("Enter # of hours worked (-1 to end): ");
scanf("%d",&number_of_hours);

while(number_of_hours != -1){
    printf("Enter hourly rate of the worker ($00.00): ");
    scanf("%f",&hourly_rate);

    salary = number_of_hours * hourly_rate;
    printf("Salary is $%.2f\n", salary);

    printf("Enter # of hours worked (-1 to end): ");
    scanf("%d",&number_of_hours);
}

return 0;
}


