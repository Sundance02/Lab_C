#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

    char sen[301];
    char lowsen[301];
    char check;
    int position[30];
    int count = 0;

    scanf("%[^\n]", sen);
    scanf("%s", &check); //ไม่มี %c ในscanfนะจ๊ะ

    int positcount = 0; //ตัวเพิ่ม list position
    int n = 0;

    while(n < strlen(sen)){
        if (isupper(sen[n])){
            lowsen[n] = tolower(sen[n]);
        }
        else{
            lowsen[n] = sen[n];
        }
        n++;
    }


    n = 0;
    while(n < strlen(lowsen)){
        if (check == lowsen[n]){
            count ++;
            position[positcount] = n;
            positcount++;
        }
        n++;
    }

    if(count > 0){
        printf("There is/are %d \"%c\" in the above sentences.\n", count, check);
        n = 0;
        int m = positcount;
        printf("Position: ");
        while (n < positcount){
            printf("%d", position[n]+1);
            n++;
            m--;
            if(m != 0){
                printf(", ");
            }
        
        }
    }
    else{
        printf("Not found.");
    }

    // printf("%c", sen[0]);
    // printf("%c", check);



    return 0;
}
