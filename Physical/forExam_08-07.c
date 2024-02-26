#include <stdio.h>
#include <string.h>
#include <ctype.h>


struct Book {
    char id[10];
    char name[100];
    char author[100];
};

int main(){

    int numbook;
    char wantbook[10];
    int checker = 0;
    scanf("%d %s", &numbook, wantbook);


    struct Book book;
    for(int i = 0; i<numbook ; i++){
        scanf("%s %s %s", book.id, book.name, book.author);
        if(strcmp(wantbook, book.id) == 0){
            printf("%s %s %s", book.id, book.name, book.author);
            checker++;
        }
    }

    if(checker == 0){
        printf("Not Found");
    }


    return 0;
}