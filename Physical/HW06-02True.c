#include<stdio.h>
#include<string.h>
#include <ctype.h>

int main(){

    int n;

    scanf("%d", &n);

    char alist[n];
    char uniquelist[200];

    int i;
    int o = 0; //เอาไว้checkว่าsizeของuniqueถึงไหนเเล้ว
    int z = 0; //เอาไว้checkว่าซ้ำไหม
    char c;

    //loop imput
    for (i = 1; i<=n; i++){
        scanf(" %c", &c);
        if(isupper(c)){
            int change = (int)c+32;
            alist[i-1] = (char)change;
        }
        else{
            alist[i-1] = c;
        }
        
    }

    int u = 0;
    int j = 0;
    //loopสร้าง array ที่มีค่าไม่ซ้ำกันเช่น aaab ก็จะได้ ab
    while (u < n){
        while(j < o){ //while(j <= u) ตอนเเรกเป็น u
            if(uniquelist[j] == alist[u]){           
                z = 1;
            }
            j = j+1;
        }

        if (z == 0){
            uniquelist[o] = alist[u];       
            o++;
        }

        j = 0;
        z = 0;
        u++;
    }
    int count[o];
    

    i = 0;
    j = 0;
    //loop ทำoutputคือนับค่าซ้ำ
    while(i < o){
        count[i] = 0;
        while(j < n){
            if(uniquelist[i] == alist[j]){
                count[i] = count[i]+1;
            }
            j++;
        }
        
        j = 0;
        i++;
    }

    //loop output
    int k = 0;
    while(k < o){
        printf("%c: %d\n", uniquelist[k], count[k]);
        k++;
    }

    return 0;
}

