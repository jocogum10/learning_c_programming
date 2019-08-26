/*Write a program that demonstrates the difference between pre-decrementing
and post-decrementing using the decrement operator --.*/

#include<stdio.h>

int main(){

int a;

//Pre decrement
a = 2;
printf("%d\n",a); // print variable
printf("%d\n",--a); // decrement variable then print variable
printf("%d\n",a); //  print variable

//Post decrement
a = 2;
printf("\n%d\n", a); // print variable
printf("%d\n", a--); // print variable then decrement
printf("%d\n", a); //print variable


return 0;
}
