#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char ch;
    char sentence[151];
    int count = 0;

    scanf("%c\n", &ch);
    scanf("%[^\n]", sentence);
 

    for(int i = 0; i<strlen(sentence); i++){
        if(tolower(sentence[i]) == tolower(ch)){
            count++;   
    }
    }

    printf("%d", count);


    return 0;
}