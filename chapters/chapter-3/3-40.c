/*Write a program that reads three nonzero float values and determines and prints if
they could represent the sides of a triangle.

perimeter = a + b + c;
sides:
a+b > c
a+c > b
b+c > a*/

#include<stdio.h>

int main(){

float a= 0, b = 0, c = 0;

printf("Enter the a: ");
scanf("%f", &a);
printf("Enter the b: ");
scanf("%f", &b);
printf("Enter the c: ");
scanf("%f", &c);

//check for the 3 conditions
int cond1 = 0, cond2 = 0, cond3 = 0;

if ( (a+b) > c){
    cond1 = 1;
}
if ( (a+c) > b){
    cond2 = 1;
}
if ( (b+c) > a){
    cond3 = 1;
}

//check the conditions
if((cond1+cond2+cond3)==3){
    printf("\ncan be a triangle.\n");
}
else{
    printf("\ncannot be a triangle.\n");
}

return 0;
}
