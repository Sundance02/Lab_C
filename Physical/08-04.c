#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){

    int count_word = 1;
    char allword[500];
    int countlenght = 0;
    scanf("%[^\n]", allword);

    //count word
    int j = 0;
    while(j < strlen(allword)){
        if(allword[j] == ' '){
            count_word++;
        }
        j++;
    }

    printf("%d words\n", count_word);
    printf("----\n");


    //count lenght
    int i = 0;
    while(i < strlen(allword)){
        
        if(allword[i] != ' '){
            char c = tolower(allword[i]);
            printf("%c", c);
            countlenght++;
        }
        else{
            printf(" : %d\n", countlenght);
            countlenght = 0;
        }

        i++;
    }

        printf(" : %d", countlenght);
    return 0;
}
