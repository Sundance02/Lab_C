#include<stdio.h>

int main()
{

    int sec;
    scanf("%d", &sec);

    int day = sec/86400;

    int hour =  (sec - (day*86400))/3600;

    int minute = ((sec - (day*86400)) - (3600*hour)) / 60;

    int s =  (((sec - (day*86400)) - (3600*hour)) - (minute * 60));

    printf("%d s = %d d %d h %d m %d s", sec, day, hour, minute, s);

    return 0;
}