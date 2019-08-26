#include <stdio.h>

/*Write a program that inputs one five-digit number, separates the number into its individual
digits and prints the digits separated from one another by three spaces each. [Hint: Use combinations
of integer division and the remainder operation.]. For example, if the user types in 42139, the
program should print. 4   2   1   3   9.*/

int main(){

printf("Enter a five-digit number: \n");

int number = 0;
scanf("%d", &number);

int ones, tenths, hundredths, thousandths, ten_thousandths;

ones = number % 10;
tenths = (number % 100) / 10;
hundredths = (number % 1000) / 100;
thousandths = (number % 10000) / 1000;
ten_thousandths = (number % 100000) / 10000;

printf("%d   %d   %d   %d   %d\n", ten_thousandths, thousandths, hundredths, tenths, ones);



return 0;
}
