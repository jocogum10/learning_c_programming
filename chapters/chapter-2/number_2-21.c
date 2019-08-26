#include <stdio.h>

/*Write a program that reads in five integers and then determines and prints the largest and the smallest integers in the group.
Use only the programming techniques you have learned in this chapter.*/

int main(){

printf("Enter three integers: \n");

int int1 = 0, int2 = 0, int3 = 0, int4 = 0, int5 = 0;

scanf("%d %d %d %d %d", &int1, &int2, &int3, &int4, &int5);

int smallest = 0, biggest = 0;

if (int1 < int2){           //test if which one is smallest then assign it to be smallest
    smallest = int1;
}
if (int2 < int1){           //test if which one is smallest then assign it to be smallest
    smallest = int2;
}
if (smallest < int3){       //test if smallest is lesser than the next integer
    smallest = smallest;    // if smallest is lesser than the next integer, smallest is smallest
}
if (smallest > int3){       //test if smallest is greater than the next integer
    smallest = int3;        // if smallest is greater than the next integer, smallest is next integer
}
if(smallest < int4){
    smallest = smallest;
}
if (smallest > int4){
    smallest = int4;
}
if (smallest < int5){
    smallest = smallest;
}
if (smallest > int5){
    smallest = int5;
}

if (int1 < int2){
    biggest = int2;
}
if (int1 > int2){
    biggest = int1;
}
if (biggest < int3){
    biggest = int3;
}
if (biggest > int3){
    biggest = biggest;
}
if (biggest < int4){
    biggest = int4;
}
if (biggest > int4){
    biggest = biggest;
}
if (biggest < int5){
    biggest = int5;
}
if (biggest > int5){
    biggest = biggest;
}


printf("smallest number is: %d\n", smallest);
printf("biggest number is: %d", biggest);

return 0;
}
