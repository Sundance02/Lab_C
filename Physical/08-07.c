#include <stdio.h>
#include <string.h>
#include <ctype.h>
struct studentinfo{
    char name[61];
    char surname[61];
    char sex[10];
    int age;
    char id[13];
    float gpa;
};

int main(){
    struct studentinfo student[20];
    for(int i = 0; i <20; i++){
        scanf("%s", student[i].name);
        scanf("%s", student[i].surname);
        scanf("%s", student[i].sex);
        scanf("%d", &student[i].age);
        scanf("%s", student[i].id);
        scanf("%f", &student[i].gpa);
    }

    char sort[10];
    scanf("%s", sort);
    char realsort[10];

    for(int i = 0; i<10; i++){
        realsort[i] = tolower(sort[i]);
    }




    if(strcmp(realsort, "name") == 0){
        
    }
    else if(strcmp(realsort, "surname") == 0){
        
    }
    else if(strcmp(realsort, "id") == 0){
     
    }





    return 0;
}