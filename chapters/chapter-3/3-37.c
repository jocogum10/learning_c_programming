/*Write a program that keeps printing the multiples of the integer, namely 2,4,8,16,32,
64, and so on. Your loop should not terminate (i.e., you should create an infinite loop). What happens
when you run this program?

answer: loops back to negative after the maximum number*/


#include<stdio.h>

int main(){

int i = 0;
while(i != 1){
    printf("%d\n", i);
    i=i+20000;
}

return 0;
}
