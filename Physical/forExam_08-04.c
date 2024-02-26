#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

    char sen[151];
    scanf(" %[^\n]", sen);
    int allword = 1;
    int countword = 0;
    
    for(int i = 0; i<strlen(sen); i++){
        if(sen[i] == ' '){
            allword ++;
        }
    }
    printf("%d words\n----\n", allword);
    
    for(int i =0; i<strlen(sen); i++){
        if(sen[i] != ' '){
            printf("%c", tolower(sen[i]));
            countword ++;
        }
        else{
            printf(" : %d", countword);
            printf("\n");
            countword = 0;
        }
    }
    printf(" : %d", countword);

    return 0;
}
