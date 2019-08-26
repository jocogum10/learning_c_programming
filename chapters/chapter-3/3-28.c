/*Determine the output for each o the following when x is 9 and y is
11, and when x is 11 and y is 9. Note that the compiler ignores the indentation in a C program. Also,
the compiler always associates an else with the previous if unless told to do otherwise by the placement
of braces{}. Because, on the first glance, you may not be sure which if an else matches, this is
referred to as the "dangling else" problem. We eliminated the indentation from the following code
to make the problem more challenging. [Hint: Apply indentation conventions you have learned.]*/

#include<stdio.h>


int main(){

//a
int x = 9, y = 11;

if(x<10)
    if(y>10)
        printf("*****\n");
    else
        printf("#####\n");
printf("$$$$$\n");


//b
x = 11, y = 9;

if(x<10){
    if(y>10)
    printf("*****\n");
}
else {
    printf("#####\n");
    printf("$$$$$\n");
}



return 0;
}
