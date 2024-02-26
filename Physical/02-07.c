#include<stdio.h>

int main()
{
    char name[30];
    char last[30];
    int stu;
    int date;
    int month;
    int year;
    float GPA;

    scanf("%s %s", name, last);
    scanf("%d", &stu);
    scanf("%d/%d/%d", &date, &month, &year);
    scanf("%f", &GPA);

    printf("Fullname: %s %s\n", name, last);
    printf("ID: %d\n", stu);
    printf("DOB: %02dei%02dei%02d\n", date, month, year); //ตอนเเรกรับเป็นchar เลยติด/มาด้วย รับเป็นintเลยหาย 02d คือเว้นซ้ายถ้าไม่ครบหลักให้เติม0
    printf("GPA: %.2f\n", GPA);

    return 0;
}