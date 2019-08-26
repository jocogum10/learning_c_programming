/*Modify the program in fig 3.10 to to validate its input.  On any input, if
the value entered is other than the 1 or 2, keep looping until the user enters the correct value.*/

#include<stdio.h>

int main(){
 int passes = 0;
 int failures = 0;
 int student = 1;
 int result;

 while( student <= 10){
    printf("Enter result (1=pass, 2= failure):");
    scanf("%d", &result);

    if (result == 1){
        passes = passes +1;
        student = student + 1;
    }
    else if(result == 2){
        failures = failures + 1;
        student = student + 1;
    }
    else{
        printf("Number entered is not valid, try again.\n");
    }
 }

 printf("Passed %d\n", passes);
 printf("Failed %d\n", failures);

 if (passes > 8){
    printf("Raise tuition\n");
 }

return 0;
}
