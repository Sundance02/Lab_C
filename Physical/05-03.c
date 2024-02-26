#include <stdio.h>

int main(){

    int m;
    int n;
    int c = 1;
    scanf("%d %d", &m, &n);

    if(m > n){
        for(m; n <= m; m--){
            printf("%d ", m);
        } 
    }
    else{
        for(m; n >= m; m++){
            printf("%d ", m);
        } 
    }


}