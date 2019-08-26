#include <stdio.h>

/*Using only the techniques you learned in this chapter, write a program that calculates
the squares and cubes if the numbers from 0 to 10 and uses tabs ti print the following table of values:*/


int main(){

printf("number\t\tsquare\t\tcube\n");
int no0 = 0, no1 = 1, no2 = 2, no3 = 3, no4 = 4, no5 = 5, no6 = 6, no7 = 7, no8 = 8, no9 = 9, no10 = 10;
int square0 = no0*no0, square1 = no1*no1, square2 = no2*no2, square3 = no3*no3, square4 = no4*no4, square5 = no5*no5, square6 = no6*no6, square7 = no7*no7, square8 = no8*no8, square9 = no9*no9, square10 = no10*no10;
int cube0 = no0*no0*no0, cube1 = no1*no1*no1, cube2 = no2*no2*no2, cube3 = no3*no3*no3, cube4 = no4*no4*no4, cube5 = no5*no5*no5, cube6 = no6*no6*no6, cube7 = no7*no7*no7, cube8 = no8*no8*no8, cube9 = no9*no9*no9, cube10 = no10*no10*no10;


printf("0\t\t%d\t\t%d\n", square0, cube0);
printf("1\t\t%d\t\t%d\n", square1, cube1);
printf("2\t\t%d\t\t%d\n", square2, cube2);
printf("3\t\t%d\t\t%d\n", square3, cube3);
printf("4\t\t%d\t\t%d\n", square4, cube4);
printf("5\t\t%d\t\t%d\n", square5, cube5);
printf("6\t\t%d\t\t%d\n", square6, cube6);
printf("7\t\t%d\t\t%d\n", square7, cube7);
printf("8\t\t%d\t\t%d\n", square8, cube8);
printf("9\t\t%d\t\t%d\n", square9, cube9);
printf("10\t\t%d\t\t%d\n", square10, cube10);

return 0;
}
