#include <stdio.h>
    struct node {
    int value;
    struct node *next;
    };
int main (){

    struct node n1, n2, n3, n4, n5;
    struct node *temp_pointer = &n1; //pointer เเค่ประกาศ type ให้ตรงกันกับตัวที่ต้องการเฉยๆ

    printf("Put Number :"); 
    scanf("%d",&n1.value);
    n1.next = &n2;
    printf("Put Number :"); 
    scanf("%d",&n2.value);
    n2.next = &n3;
    printf("Put Number :"); 
    scanf("%d",&n3.value);
    n3.next = &n4;
    printf("Put Number :"); 
    scanf("%d",&n4.value);
    n4.next = &n5;
    printf("Put Number :"); 
    scanf("%d",&n5.value);
    n5.next = 0;

    while(temp_pointer != 0 ) {
        // printf("%d " , temp_pointer->value);
        temp_pointer = temp_pointer->next;
    }

    //delete zone
    int delete = 1;
    temp_pointer = &n1;

    for(int i = 0; i < delete && temp_pointer != 0; i++){
        temp_pointer = temp_pointer->next;
    }

    temp_pointer->next = temp_pointer->next->next;


    temp_pointer = &n1;
    while(temp_pointer != 0 ) {
        printf("%d " , temp_pointer->value);
        temp_pointer = temp_pointer->next;
    }    


    return 0;
}