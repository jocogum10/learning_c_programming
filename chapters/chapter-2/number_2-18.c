#include <stdio.h>

/*Write a program that reads in the radius of a circle and prints the circle's diameter, circumference and area.
Use the constant value 3.14159 for pi. Perform each of these calculation inside the printf statement(s) and use the conversion specifier %f.
[Note: In this chapter, we have discussed only integer constants and variables. In chapter 3 we will discuss floating-point numbers,
i.e. values that can have decimal points.]*/

int main(){

printf("Enter the radius of a circle:\n");

float radius = 0, pi = 3.14159, diameter = 0, circumference = 0, area = 0;

scanf("%f", &radius);

printf("\nDiameter: %f", diameter = radius*2);
printf("\nCircumference: %f", circumference = 2*pi*radius);
printf("\nArea: %f", area = pi*radius*radius);

return 0;
}
