/*Write a program that reads in the side of a square and then prints that square out of a asterisks.
your program should work for squares of all side sizes between 1 and 20. For example, if your
program reads a size of 4, it should print*/


#include<stdio.h>

int main(){

int sides = 0;

printf("Enter the size of the square: ");
scanf("%d", &sides);

int column = sides;
while(sides != 0){
    for(int s = column; s != 0; s--){
        printf("*");
    }
    printf("\n");
    sides--;
}

return 0;
}
