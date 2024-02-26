#include <stdio.h>
#include <stdlib.h>
struct node {
    int value;
    struct node *next;
};

struct node createnote(int value);


struct node createnote(int value){
    struct node newnode;
    newnode.value= value;
    newnode.next = NULL;
    return newnode;
}

void connectnode(struct node n, int value){
    struct node newnode;
    newnode = createnote(value);
    n.next = &newnode;
}



int main ()
{
    int size;
    scanf("%d", &size);
    size --;
    struct node start;
    scanf("%d", &start.value);
    start.next = NULL;

    for(int i = 1; i<=size; i++){
        int value;
        scanf("%d", &value);
        connectnode(start, value);
    }

    struct node *temp_pointer = &start;

    while( temp_pointer != 0 ) {
        printf("%d ", temp_pointer->value);
        temp_pointer = temp_pointer->next;
    }


    // struct node n1, n2, n3, n4, n5;
    // struct node *temp_pointer = &n1;
    // printf("Put Number :");
    // scanf("%d",&n1.value);
    // n1.next = &n2;
    // printf("Put Number :");
    // scanf("%d",&n2.value);
    // n2.next = &n3;
    // printf("Put Number :");
    // scanf("%d",&n3.value);
    // n3.next = &n4;
    // printf("Put Number :");
    // scanf("%d",&n4.value);
    // n4.next = &n5;
    // printf("Put Number :");
    // scanf("%d",&n5.value);
    // n5.next = 0;

    // while(temp_pointer != 0 ) {
    //     printf("%d ", temp_pointer->value);
    //     temp_pointer = temp_pointer->next;
    // }

    // struct node *new_node;
    // new_node = (struct node *) malloc(sizeof(struct node ));
    // int position, count, data;
    // printf( "\nEnter a position and a number to insert : ");
    // scanf( "%d %d", &position ,&data);
    // temp_pointer = &n1;

    // for ( count = 1; count<position && temp_pointer != 0 ; count++){
    //     temp_pointer = temp_pointer->next;
    // }
    // new_node->value = data;
    // new_node->next = temp_pointer->next;
    // temp_pointer->next = new_node;
    // temp_pointer = &n1;
    // while( temp_pointer != 0 ) {
    //     printf("%d ", temp_pointer->value);
    //     temp_pointer = temp_pointer->next;
    // }
}