/*Write a program that reads three non-zero integers and determines and prints if they could
be the sides of a right triangle.

condition:
c*c = a*a + b*b*/

#include<stdio.h>

int main(){

float sidea= 0, sideb = 0, hypotenusec = 0;

printf("Enter the side a: ");
scanf("%f", &sidea);
printf("Enter the side b: ");
scanf("%f", &sideb);
printf("Enter the hypotenuse c: ");
scanf("%f", &hypotenusec);

//check for the 3 conditions
float square_a = sidea * sidea, square_b = sideb * sideb, square_c = hypotenusec * hypotenusec;

if ( square_c == (square_a+square_b)){
    printf("can be the sides of a right triangle");
}
else{
    printf("cannot be the sides of a right triangle");
}

return 0;
}
