/*Drivers are concerned with the mileage obtained by their automobiles. One driver has kept
track of several tankfuls of gasoline by recording miles driven and gallons used for each tankful.
Develop a program that will input the miles driven and gallons used for each tankful. The program
should calculate and display the miles per gallon obtained for each tankful. After processing all input
information, the program should calculate and print the combined miles per gallon obtained for all tankfuls.*/

/*pseudocode:

define gallons and miles integers

while gallons is not equal to -1
enter the gallons used
enter the miles driven
calculate the miles/gallon

*/
#include<stdio.h>

int main(){

float gallons = 0, miles = 0, miles_per_gallons = 0;

while(gallons != -1){
    printf("Enter the gallons (-1 to end): ");
    scanf("%f", &gallons);
    printf("Enter miles driven: ");
    scanf("%f", &miles);
    miles_per_gallons = miles/gallons;
    printf("the miles/gallons for this tank was %f\n\n", miles_per_gallons);
}

return 0;
}
