#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

    float mlist1[3];
    float mlist2[3];
    float mlist3[3];

    scanf("%f %f %f", &mlist1[0], &mlist1[1], &mlist1[2]);
    scanf("%f %f %f", &mlist2[0], &mlist2[1], &mlist2[2]);
    scanf("%f %f %f", &mlist3[0], &mlist3[1], &mlist3[2]);

    if ((mlist1[1] == 0 && mlist1[2] == 0) && (mlist2[0] == 0 && mlist2[2] == 0) && (mlist3[0] == 0 && mlist3[1] == 0)){

        if (mlist1[0] == mlist2[1]  && mlist2[1] == mlist3[2] && (mlist1[0] != 0 || mlist1[1] != 0 || mlist2[2] != 0)){
            printf("This is a scalar matrix");
        }
    }
    else{
        printf("This is not a scalar matrix\n");
    }

    return 0;
}
