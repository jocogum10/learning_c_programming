/*Write a program that reads the radius of a circle (as a float value) and computes and prints
the diameter, the circumference and the area. Use the value 3.14159 for pi.*/


#include<stdio.h>

int main(){

float pi = 3.14159, radius = 0, diameter = 0, circumference = 0, area = 0;

printf("Input the radius of a circle: ");
scanf("%f", &radius);

diameter = 2 * radius;
circumference = 2 * pi * radius;
area = pi * radius * radius;

printf("Diameter: %f\n", diameter);
printf("Circumference: %f\n", circumference);
printf("Area: %f\n", area);

return 0;
}
