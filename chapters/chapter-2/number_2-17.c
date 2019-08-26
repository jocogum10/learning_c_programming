#include <stdio.h>
/*Write a program that asks the user to enter two integers, obtains the numbers from the user,
then prints the larger number followed by the words "is larger". if the numbers are equal, prints the message "These numbers are equal".
Use only the single-selection form of the if statement you learned in this chapter.*/

int main(){

printf("Enter two integers: \n");

int integer1, integer2;
scanf("%d", &integer1);
scanf("%d", &integer2);

if(integer1 < integer2){
    printf("integer2 (%d) is greater than integer1 (%d)", integer2, integer1);
}

if(integer1 > integer2){
    printf("integer1 (%d) is greater than integer2 (%d)", integer1, integer2);
}

if(integer1 == integer2){
    printf("These numbers are equal.");
}


return 0;
}
