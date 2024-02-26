#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

    char finder;
    char sen[151];
    int count = 0;

    scanf("%c\n", &finder);
    scanf("%[^\n]", sen);
    
    for(int i = 0; i < strlen(sen); i++){
        char compare = tolower(sen[i]);
        if(tolower(finder) == compare){
            count ++;
        }
    }

    printf("%d", count);

    return 0;
}
