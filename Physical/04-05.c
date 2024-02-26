#include <stdio.h>


int main()
{
    char a;

    scanf("%c", &a);

    int converting = (int) a;

    if(converting >= 65 && converting <= 90){
        printf("%c", (char)converting+32);
    }
    else if(converting >= 97 && converting <= 122){
        printf("%c", (char)converting-32);
    }
    else{
        printf("error");
    }

    return 0;
}