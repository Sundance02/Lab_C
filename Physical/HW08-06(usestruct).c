#include <stdio.h>
#include <string.h>
#include <ctype.h>



    struct Record {
        char id[10];
        char name[100];
        long salary;
        long sales;
    };



int main(){    
    int times;

    scanf("%d", &times);

    struct Record history[times];

    for(int i = 0; i<times; i++){
        scanf("%s", history[i].id);
        scanf("%s", history[i].name);
        scanf("%ld", &history[i].salary);
        scanf("%ld", &history[i].sales);
    }
    char idwant[10];
    scanf("%s", idwant);
    int checker = 0;
    for(int i = 0; i<times; i++){
        if(strcmp(history[i].id, idwant)== 0){
            printf("%s\n", history[i].id);
            printf("%s\n", history[i].name);
            printf("%ld\n", history[i].sales);
            double cms = history[i].sales*0.02;
            printf("%.2lf\n", cms);
            printf("%ld\n", history[i].salary);
            printf("%.2lf", cms+history[i].salary);
            checker = 1;
        }
    }
    if(checker == 0){
        printf("ID not found !!!");
    }

    return 0;
}


