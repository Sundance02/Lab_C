#include <stdio.h>

int main (){
    int step;
    scanf("%d", &step);

    int allstep[step+2];
    allstep[0] = 1;
    allstep[1] = 2;


    int index = 2;
    while (index < step){
        allstep[index] = allstep[index-1] + allstep[index-2];
        index++;
    }

    printf("method = %d", allstep[step-1]);



    return 0;
}