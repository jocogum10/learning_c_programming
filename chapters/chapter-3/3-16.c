/*Develop a C program that will determine if a department store customer has exceeded the credit limit
on a charge account. For each customer, the following facts are available:
a) account number
b) balance at the beginning of the month
c) total of all items charged by this customer this month
d) total of all credits applied to this customer's account this month
e) allowed credit limit

the program should input each of these facts, calculate the new balance (=beginning balance+charges-credits), and determine
if the new balance exceeds the customer's credit limit. for those customers whose credit limit exceed, the program should display
the customer's account number, credit limit, new balance and the message "Credit limit exceeded". Here is a sample input/output dialog:
*/

#include<stdio.h>


int main(){

int account_number = 0;
printf("Enter account number: ");
scanf("%d",&account_number);

float beg_bal = 0, t_charge = 0, t_credit = 0, cred_lim = 0, bal = 0;

while(account_number != -1){
    printf("Enter beginning balance: ");
    scanf("%f",&beg_bal);
    printf("Enter total charges: ");
    scanf("%f", &t_charge);
    printf("Enter total credits: ");
    scanf("%f", &t_credit);
    printf("Enter credit limit: ");
    scanf("%f", &cred_lim);
    bal = beg_bal + t_charge - t_credit;


    if(bal > cred_lim){
        printf("Credit limit exceeded.");

        printf("\nAccount: %d", account_number);
        printf("\nCredit Limit: %f", cred_lim);
        printf("\nBalance: %f\n", bal);

        printf("\nEnter account number: ");
        scanf("%d",&account_number);
    }
    else{
        printf("\nEnter account number: ");
        scanf("%d",&account_number);
    }
}


return 0;
}
