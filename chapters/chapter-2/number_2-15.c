#include <stdio.h>
/*write a program that asks the users for two numbers, obtains the two numbers from the user
and prints the sum, product, difference, quotient, and remainder of the two numbers */


int main(){

printf("Input two numbers: \n");

int number1, number2;
number1=0;
number2=0;

scanf("%d", &number1);
scanf("%d", &number2);

int sum = number1 + number2;
int product = number1*number2;
int difference = number1 - number2;
int quotient = number1/number2;
int remainder = number1%number2;

printf("\nthe sum of the numbers is: %d", sum);
printf("\nthe product of the numbers is: %d", product);
printf("\nthe difference of the numbers is: %d", difference);
printf("\nthe quotient of the numbers is: %d", quotient);
printf("\nthe remainder of the numbers is: %d", remainder);


return 0;
}
