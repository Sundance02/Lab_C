#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char sentence[200];

    scanf("%[^\n]", sentence);

    for(int i = 0; i<strlen(sentence); i++){
        if(sentence[i] != ' '){
            printf("%c", sentence[i]);   
    }
    }
  

    return 0;
}