/*How can you determine how fast your own computer really operates? Write a program with
a while loop that counts from 1 to 300,000,000 by 1s. Every time the count reaches a multiple of
100,000,000, print that number on the screen. Use your watch to time how long each 100 million
repetitions of the loop takes.*/


#include<stdio.h>

int main(){

int i = 1;

while(i < 300000001){
    if((i % 100000000) == 0){
        printf("%d\n", i);
    }
    i++;
}


return 0;
}
