#include <stdio.h>
int main(){

    //pointer
    int a = 5;
    int *pa = &a;
    int **ppa = &pa;

    //print addressของ a
    printf("address of a :%d \n", &a);
    printf("address of a :%d \n", pa);
    printf("value of a :%d \n", *ppa); // ได้valueของ pa ก็คือ address ของ a นั่นเอง

    //print addressของ pa
    printf("address of pa :%d \n", &pa);
    printf("address of pa :%d \n", ppa);

    //print value a
    printf("value of a :%d \n", a);
    printf("value of a :%d \n", *(&a));
    printf("value of a :%d \n", *pa);
    printf("value of a :%d \n", **ppa);


    printf("-----------------\n");

    int b = 10;
    printf("b Before %d\n", b);
    
    int *pointerb = &b; //พอถือ address เเล้วจะเเก้ค่าของตัวaddressนั้นๆได้เเบบอิสระ
    *pointerb = 50;
    printf("b After %d\n", b);



    printf("*(&pa) = %d\n", *(&pa));
    printf("*(&ppa) = %d", *(&ppa));
    return 0;
}