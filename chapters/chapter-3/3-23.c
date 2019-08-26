/*Write a programm that utilizes looping to print the following table of values:
A       A+2     A+4     A+6
3       5       7       9
6       8       10      12
9       11      13      15
*/
#include<stdio.h>

int main(){

printf("A\t\t\tA+2\t\t\tA+4\t\t\tA+6\n");
int i;
for(i = 0; i < 3; i++){
    int first = 0, sec = 0, third = 0, fourth = 0;
    first = i + 3;
    sec = first + 2;
    third = first + 4;
    fourth = first + 6;
    printf("%d\t\t\t%d\t\t\t%d\t\t\t%d\n", first, sec, third, fourth);
}

return 0;
}
