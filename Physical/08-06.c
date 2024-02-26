#include <stdio.h>
#include <string.h>
#include <ctype.h>



    struct student_info {
    char name[61]; 
    char surname[61]; 
    char sex[10]; 
    int age;
    char id[12];
    float gpa; 
    };




int main(){    
  

    
    struct student_info stu;
    scanf("%s", stu.name);
    scanf("%s", stu.surname);
    scanf("%s", stu.sex);
    scanf("%d", &stu.age);
    scanf("%s", stu.id);
    scanf("%f", &stu.gpa);

    

    if(strcmp(stu.sex, "Male") == 0){
        printf("Mr ");
    }
    else{
        printf("Miss ");
    }

    printf("%.1s ", stu.name );
    printf("%s ", stu.surname );
    printf("(%d) ", stu.age);
    printf("ID: %s ", stu.id);
    printf("GPA %.2f", stu.gpa);
    return 0;
}


