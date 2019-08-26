/*what is wrong with the following statement? Rewrite the statement to accomplish
what the programmer was probably trying to do.

printf( "%d", ++( x+y ) );*/

#include<stdio.h>


int main(){

int x = 1, y = 1;
printf("%d", 1 + (x+y) );


return 0;
}
