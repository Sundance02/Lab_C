#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct student_info{
    char name[61];
    char surname[61];
    char sex[10];
    int age;
    char id[13];
    float gpa;
};

int main(){

    struct student_info student;
    scanf("%s %s %s", student.name, student.surname, student.sex);
    scanf("%d", &student.age);
    scanf("%s", student.id);
    scanf("%f", &student.gpa);

    if(strcmp(student.sex, "Male") == 0){
        printf("Mr ");
    }
    else{
        printf("Miss ");
    }

    printf("%.1s ", student.name);
    printf("%s ", student.surname);
    printf("(%d) ", student.age);
    printf("ID: %s ", student.id);
    printf("GPA %.2f", student.gpa);

    return 0;
}
