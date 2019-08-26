/*Write a program that utilizes looping to print the following:
N       10*N        100*N       1000*N
1       10          100         1000
2       20          200         2000
.......
*/
/*The tab sequence, /t, may be used in the printf statement to separate the columns in the tabs*/
#include<stdio.h>

int main(){
printf("N\t\t\t10*N\t\t\t100*N\t\t\t1000*N\n");
int sec = 0, third = 0, fourth = 0;
for(int i = 1; i < 11; i++){
    sec = i*10;
    third = i*100;
    fourth = i*1000;
    printf("%d\t\t\t%d\t\t\t%d\t\t\t%d\n", i, sec, third, fourth);
}

return 0;
}
