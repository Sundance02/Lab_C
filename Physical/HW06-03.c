#include <stdio.h>
#include <string.h>

int main(){

    char sen[100];
    scanf("%s", sen);

    int status = 0;
    int i = 0;

    while(i < strlen(sen)){

        // printf("%c : %c\n", sen[i],  sen[strlen(sen)-i-1]);


        if(sen[i] != sen[strlen(sen)-i-1]){
            status ++;
        }

    i++;
    }

    if(status == 0){
        printf("It is Palindrome.");
    }
    else if(status != 0){
        printf("It is not Palindrome.");
    }

    return 0;
}