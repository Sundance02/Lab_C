#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

    char sen[101];
    scanf("%[^\n]", sen);

    int n = strlen(sen)-1;
    while(n>=0){
        printf("%c", sen[n]);
        n--;
    }

    return 0;
}
