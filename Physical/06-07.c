#include<stdio.h>
#include<string.h>

int main(){

    char sen[200];

    scanf("%[^\n]", sen);


    char notabc[26] = {'A', 'B', 'X', 'Y', 'P', 'Q', 'R', 'M', 'N', 'C', 'E', 'D', 'K', 'L', 'J', 'O', 'S', 'H', 'T', 'U', 'F', 'V', 'Z', 'G', 'W', 'I'};
    char notabc1[26] = {'a', 'b', 'x', 'y', 'p', 'q', 'r', 'm', 'n', 'c', 'e', 'd', 'k', 'l', 'j', 'o', 's', 'h', 't', 'u', 'f', 'v', 'z', 'g', 'w', 'i'};

    // printf("%d \n", strlen(sen));


    int i = 0;
    int j = 0;

    // sen[j] = notabc[20+6];
    
    // printf("%c", sen[0]);
    // printf("%c", sen[1]);

    

    while(j < strlen(sen)){
        // printf("%c : ", sen[j]);
        while(i<=25){
            //  printf("%c \n", notabc[i]);
            if((sen[j] == 'A' || sen[j] == 'B' || sen[j] == 'X' || sen[j] == 'Y'|| sen[j] == 'P')&&(sen[j] == notabc[i])){
                sen[j] = notabc[i+26-5];
                break;
            }
            else if (sen[j] == notabc[i]){
                sen[j] = notabc[i-5];
                break;
            }
            if((sen[j] == 'a' || sen[j] == 'b' || sen[j] == 'x' || sen[j] == 'y'|| sen[j] == 'p')&&(sen[j] == notabc1[i])){
                sen[j] = notabc1[i+26-5];
                break;
            }
            else if (sen[j] == notabc1[i]){
                sen[j] = notabc1[i-5];
                break;
            }

            i++;
        }
        j++;
        i = 0;
    }
    int  k = 0;
    while(k < strlen(sen)){
        printf("%c", sen[k]);
        k++;
    }
    return 0;
}