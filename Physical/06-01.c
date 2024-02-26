#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

int main(){

    int num;
    int M[] = {2, 20, 8, 10, 4, 6, 16, 18};
    int N[] = {1, 3, 9, 7, 11, 15, 19};
    while (true){
        scanf("%d", &num);
        if(num >= 1 && num <= 20){
            break;
        }
    }

    int n = 0;
    int status = 0;
    while(n <= 8){
        if(num == M[n]){
            printf("%d is in M at index [%d]", num, n);
            status = 1;
            break;
        }
        else if (num == N[n]){
            printf("%d is in N at index [%d]", num, n);
            status = 1;
            break;
        }
        n++;
    }

    if(status == 0){
        printf("%d is not in neither M nor N", num);
    }
    




    return 0;
}