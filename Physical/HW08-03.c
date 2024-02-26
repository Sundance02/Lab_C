#include <stdio.h>
#include <string.h>
#include <stdbool.h>
 
int main() {
    char sen[101];
    char sen2[101];
    int add = 0;
    scanf("%s", sen);
 
    while (true) {
        bool found = false;
 
        for (int i = 0; i < strlen(sen) - 1; i++) {
            if (sen[i] == sen[i+1]){
                found = true;
                int first = i;
                int second = i+1;
                i++; 
 
                for (int j = 0; j < strlen(sen); j++) {
                    if (j != first && j != second) {
                        printf("%c", sen[j]);
                        sen2[add] = sen[j];
                        add++;
                    }
                }
                printf("\n");
                sen2[add] = '\0'; 
                strcpy(sen, sen2);
                add = 0;
                break;
            }
        }
 
        if (found == false) {
            break;
        }
    }
 
    return 0;
}