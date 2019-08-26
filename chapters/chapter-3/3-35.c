/*Write a program that reads an integer and determines and prints how many digits in the integer are 7s*/

#include<stdio.h>

int main(){

    int number = 0, count = 0;

    printf("Enter a 5-digit integer: ");
    scanf("%d", &number);

    int num1 = 0, num2 = 0, num3 = 0, num4 = 0, num5 = 0;

    num1 = number / 10000;
    num2 = (number % 10000) / 1000;
    num3 = (number % 1000) / 100;
    num4 = (number % 100) / 10;
    num5 = number % 10;

    if((num1 % 7) == 0){
        count++;
    }
    if((num2 % 7) == 0){
        count++;
    }
    if((num3 % 7) == 0){
        count++;
    }
    if((num4 % 7) == 0){
        count++;
    }
    if((num5 % 7) == 0){
        count++;
    }

    printf("Number of sevens is: %d", count);



return 0;
}
