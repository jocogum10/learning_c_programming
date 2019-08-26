/*What does the following print?

ans: if odd number printf multiply sign
if even number printf plus sign*/

#include<stdio.h>

int main(){
int count = 1;

while( count <= 10){
    printf("%s\n", count % 2 ? "****" : "++++++++");
    count++;
}

return 0;
}
