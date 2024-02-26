#include <stdio.h>
#include <string.h>
#include <ctype.h>



int main(){

    int charnum = 0;
    int wordnum = 0;
    int line = 0;

    
    char senreal[451] = "";
    while(1<2){
        char sen[451];
        scanf("%s ", sen);

        if(strchr(sen, '.') >= 0){
            break;
        }
        strcat(senreal, sen);
        strcat(senreal, " ");
        line ++;
        if(strchr(senreal, '\n') != NULL){

            for(int i = 0; i<strlen(sen); i++){               
                if(sen[i] != ' ' && sen[i] != '\n'){
                    charnum ++;  
                }
                else{
                    wordnum ++;
                }
            }
            char senreal[451] = "";
        }
    }
    

    printf("Char = %d, word = %d, line = %d", charnum, wordnum, line);

    printf("%s", senreal);


    return 0;
}