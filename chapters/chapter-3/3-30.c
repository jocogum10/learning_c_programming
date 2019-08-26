/*Modify the program you write in exercise 3.33 so that it prints a hollow square. for example,
if your program reads a size of 5, it should print*/

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
