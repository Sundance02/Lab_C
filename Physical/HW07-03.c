#include <stdio.h>

int main (){
    int step;
    scanf("%d", &step);

    int allstep[step+2];
    allstep[0] = 1;
    allstep[1] = 2;

    int n = step-2;
    int index = 2;
    while (n <= step){
        allstep[index] = allstep[index-1] + allstep[index-2];
        n++;
        index++;
        printf("%d", n);
    }

    printf("method = %d", allstep[step-1]);

    //ใช้ n = step - loop มันได้ เเค่4 หายไป1ขั้น
    // step 6 
    // n = 4
    //     5
    //     6
    //     7
    // index = 2 3 4 5 // stepหายไป1ขั้นเลยผิด


    //ใช้ index = 2 loop
    // step 6 
    // index = 2 3 4 5 6

    return 0;
}