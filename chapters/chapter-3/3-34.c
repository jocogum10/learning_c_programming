/*Write a program that prints 100 asterisk, one at a time. After every tenth asterisk, your program
should print a newline character. [Hint: Count from 1 to 100. Use the remainder operator to recognize
each time the counter reaches a multiple of 10.]*/

#include<stdio.h>

int main(){
    int a = 0;

    while(a != 100){
        if ((a % 10) == 0){
            printf("\n");
        }
        else{
            printf("*");
        }
        a++;
    }

return 0;
}
