#include <stdio.h>




int main()
{
    char a;

    scanf("%c", &a);


    switch (a)
    {
    case 65: printf("Genius");
        break;
    case 66: printf("Good");
        break;
    case 67: printf("Try Harder");
        break;
    case 68: printf("Very Bad");
        break;
    case 70: printf("Fail");
        break;
    case 97: printf("Genius");
        break;
    case 98: printf("Good");
        break;
    case 99: printf("Try Harder");
        break;
    case 100: printf("Very Bad");
        break;
    case 102: printf("Fail");
        break;  
    default: printf("Invalid Input");
        break;
    }

    return 0;
}