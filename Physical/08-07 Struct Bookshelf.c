#include <string.h>
#include <stdio.h>


struct Book {
    char id[10];
    char name[100];
    char author[100];
};

int main(){
    int num;
    char numofbook[40];
    scanf("%d", &num);
    scanf("%s", numofbook);

    int count = 0;
    int i = 0;
    struct Book bookinfo;
    while(i < num){
        scanf("%s", bookinfo.id);
        scanf("%s", bookinfo.name);
        scanf("%s", bookinfo.author);
        if(strcmp(bookinfo.id, numofbook) == 0){
            printf("%s %s %s", bookinfo.id, bookinfo.name, bookinfo.author);
            count++;
        }
        i++;
    }
    if(count == 0){
        printf("Not Found");
    }
    return 0;
}