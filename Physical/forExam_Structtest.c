#include <stdio.h>
#include <string.h>

struct student_info{
    char name[200];
    char surname[200];
    char sex[20];
    int age;
    char id[13];
    float gpa;
};

int main(){
    struct student_info student;
    scanf("%s", student.name);
    scanf("%s", student.surname);
    scanf("%s", student.sex);
    scanf("%d", &student.age);
    scanf("%s", student.id);
    scanf("%f", &student.gpa);

    if (strcmp(student.sex, "Male") == 0){
        printf("Mr ");
    }
    else
    {
        printf("Miss ");
    }

    printf("%.1s %s ", student.name, student.surname);
    printf("(%d) ", student.age);
    printf("ID: %s ", student.id);
    printf("GPA %.2f", student.gpa);

    return 0;
}