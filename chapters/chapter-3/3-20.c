/*Write a program that utilizes looping to print the numbers from 1 to 10
side by side on the same line with three spaces between numbers*/

#include<stdio.h>


int main(){

int j = 10;

while(j != 0){
    int i = 2;
    printf("%d", j);
    while(i !=0 ){
        printf(" ");
        i--;
        }
    j--;
}

return 0;
}
