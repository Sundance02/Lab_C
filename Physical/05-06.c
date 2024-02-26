#include <stdio.h>

int main(){


    int n1, n2, row, column;
    scanf("%d",&n1);
    n2 = n1;
    int p = n1-1; //ลองทำใหม่
    row = 0;
    column = 0;

    while(row < n1){
        while(column < n2){
            column ++;
            if (column <= p)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
        column = 0;
        n2 ++;
        row ++;
        p --;
    }

    return 0;
}