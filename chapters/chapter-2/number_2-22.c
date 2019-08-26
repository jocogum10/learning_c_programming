#include <stdio.h>

/*Write a program that reads an integer and determines and prints whether it is odd or even.
[Hint: Use the remainder operator. An even number is a multiple of two. Any multiple of two leaves
a remainder of zero when divided by 2.]*/

int main(){

printf("Enter an integer: \n");

int integer = 0;

scanf("%d", &integer);

int odd_or_even = integer % 2;

if(odd_or_even != 0){
    printf("The integer is odd.");
}
if (odd_or_even == 0){
    printf("The integer is even.");
}

return 0;
}
