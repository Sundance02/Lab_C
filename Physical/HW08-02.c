#include <stdio.h>
#include <string.h>
#include <ctype.h>



int main(){
    char sen[100];
    scanf("%s", sen);

    int i = 0;
    int j = 0;
    while(i < strlen(sen)){
        while(j < strlen(sen)){
            // printf("%c : %c\n", sen[i], sen[j]);
            if (sen[i] > sen[j]){
                char swap = sen[i];
                sen[i] = sen[j];
                sen[j] = swap;
            }
            j++;
        }
        
        i++;
        j = i;
    }

    i = 0;
    while(i < strlen(sen)){
        printf("%c", sen[i]);
        i++;
    }


    return 0;
}




