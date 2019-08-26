/*Write a program that displays the following checkboard pattern:
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *

your program must use only three output statement, one each of the following forms:

printf("* ";
printf(" ";
printf("\n";
*/


#include<stdio.h>


int main(){

    int i = 0, j = 0;
    while(i < 8){
        while (j < 8){
           printf("* ");
           j++;
        }

        j = 0;
        printf("\n");

        if ((i %2) == 0){
            printf(" ");
        }

        i++;
    }

return 0;
}
