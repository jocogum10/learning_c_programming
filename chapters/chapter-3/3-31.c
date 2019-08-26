/*A palindrome is a number or a text phrase that reads the same backward as forward. For
example, each of the following five digit integers is a palindrome: 12321, 55555 45554, and 11611.
Write a program that reads in a five-digit integer and determines whether or not it is a palindrome.
[Hint: Use the division and remainder operators to separate the number into its individual digits.]*/

#include<stdio.h>

int main(){

int number = 0;

printf("Enter number: ");
scanf("%d", &number);

int num1 = 0, num2 = 0, num3 = 0, num4 = 0, num5 = 0;

num1 = number / 10000;
num2 = (number % 10000) / 1000;
num3 = (number % 1000) / 100;
num4 = (number % 100) / 10;
num5 = number % 10;



printf("Number entered is: %d %d %d %d %d\n\n", num1, num2, num3, num4, num5);

if (num1 == num5){                  //check if thousanths place number is the same with ones place number
    if (num2 == num4){              //check if hundredths place number is the same with tenths place number
        printf("which is a palindrome.\n");
    }
    else{
        printf("which is not a palindrome.\n");
    }
}
else{
    printf("not a palindrome.\n");
}


return 0;
}
