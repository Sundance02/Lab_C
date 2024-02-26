#include <stdio.h>

int main(){
    int row;
    scanf("%d", &row);
    int column = row;
    int space = row-1;
    int i = 0;
    int j = 1;

    while (i < row){
        while(j <= column){
            if (j <= space){
                printf(" ");
            }
            else{
                printf("*");
            }

            j++;
        }
        printf("\n");
        
        j = 1;
        i++;
        space--;
        column ++;
    }


    return 0;
}