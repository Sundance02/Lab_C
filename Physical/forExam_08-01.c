#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

    char sen[151];
    scanf("%[^\n]", sen);

    for(int i = 0; i < strlen(sen) ; i++){
        if(sen[i] != ' '){
            printf("%c", sen[i]);
        }
    }




    return 0;
}

