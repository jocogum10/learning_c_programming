/*Input an integer containing on 0s an 1s (i.e., a "binary" integer) and print its decimal
equivalent. [Hint: Use the remainder and division operators to pick-off the "binary" number's digits
one at a time from right to left. Just as in the decimal number system, in which the rightmost digit
has a positional value of 1, and the next digit left has a positional value of 10, then 100, then 1000\
and so on, in the binary system the rightmost digit has a positional value of 1, the left has a positional value of 2,
then 4, the 8, and so on. Thus the decimal number 234 can be interpreted as 4*1+3*10+2*100. The decimal
equivalent of binary 1101 is 1*1+0*2+1*4+1*8 or 1+0+4+8 or 13.*/
#include<stdio.h>

int main(){


//assign the number in their decimal places
int number = 0;

printf("Enter 4 binary number: ");
scanf("%d", &number);

int num1 = 0, num2 = 0, num3 = 0, num4 = 0;

num1 = number / 1000;
num2 = (number % 1000) / 100;
num3 = (number % 100) / 10;
num4 = number % 10;

printf("Number you entered is: %d %d %d %d\n\n", num1, num2, num3, num4);

//conversion
int d8 = 0, d4 = 0, d2 = 0, d1 = 0;

if (num1 == 1){
    d8=8;
}
if (num2 == 1){
    d4=4;
}
if (num3 == 1){
    d2=2;
}
if (num4 == 1){
    d1=1;
}

//calculate the decimal number
 int decimal = 0;

 decimal = d8+d4+d2+d1;

 //print decimal number
 printf("Decimal number is: %d\n", decimal);

return 0;
}
