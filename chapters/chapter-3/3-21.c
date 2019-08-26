/*the process of finding the largest number (i.e., the maximum of a group of numbers)
is used frequently in computer applications. For example, a program that determines the
winner of a sales contest would input the number of units sold by each salesperson.
The sales person who sold the most units wins the contest. Write a pseudocode program and
a program that inputs a series of 10 numbers and determines and prints the largest of
the numbers. [Hint: Your program should use three variables as follows]:*/

/*Counter - a counter to count to 10(i.e., to keep track of how many numbers have
been input and to determine when all 10 numbers have been processed)
Number - the current number input to the program
Largest - the largest number found so far*/

//Pseudocode
/*initiate variables and assign value
input number of sales
increment counter variable
compare current variable with the new variable
if new is larger, replace
if old is larger, same
loop*/
#include<stdio.h>

int main(){

int counter = 1;
float number = 0, largest = 0;


while(counter<10){
    printf("salesman number: %d", counter);
    printf("\nEnter sales number: ");
    scanf("%f", &number);

    if(number>largest){
        largest = number;
    }
    else{
        largest = largest;
    }

    counter++;
}

printf("the winner is: %f", largest);

return 0;
}

