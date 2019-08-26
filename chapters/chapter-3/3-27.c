/*what does the following program print?

ans:print 10 '<' symbols if row is odd
print 10 '>' symbols if row is even*/

#include<stdio.h>


int main(){

int row = 10;
int column;

while(row >= 1){
    column = 1;
    while(column <= 10){
        printf("%s", row%2 ? "<":">");
        column++;
    }
    row--;
    printf("\n");
}

return 0;
}
