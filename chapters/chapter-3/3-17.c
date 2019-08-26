/*the simple interest on a loan is calculated by the formula:
interest = principal * rate * days / 365;
the preceding formula assumes that rate is the annual interest rate, and therefore includes the division by 365 days. Develop
a program that will input principal, rate and days for several loans, and will calculate and display the simple interest for each
loan, using the preceding formula. Here is a sample input/output dialog:*/

#include<stdio.h>

int main(){

int loan_principal = 0;
printf("Enter loan principal: ");
scanf("%d", &loan_principal);

float rate = 0, interest = 0;
int days = 0;

while(loan_principal != -1){
    printf("Enter interest rate: ");
    scanf("%f", &rate);
    printf("Enter term of the loan in days: ");
    scanf("%d", &days);
    interest = loan_principal * rate * days / 365;
    printf("The interest charge is %f", interest);

    printf("\n\nEnter loan principal: ");
    scanf("%d", &loan_principal);
}


return 0;
}
