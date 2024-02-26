#include <stdio.h>
#include <string.h>
#include <ctype.h>



    struct Weather {
    char outlook[9]; //outlook{overcast,sunny,rain}
    int temperature;
    int humidity;
    char wind; //wind{T,F}
    };

void playing_decision(struct Weather);


int main(){    
    int times;

    scanf("%d", &times);

    for(int i = 0; i<times; i++){
        struct Weather weather;
        scanf("%s", weather.outlook);
        scanf("%d", &weather.temperature);
        scanf("%d", &weather.humidity);
        scanf(" %c", &weather.wind);
        playing_decision(weather);
    }
    
    

    return 0;
}

void playing_decision(struct Weather weather){

    if(strcmp(weather.outlook, "overcast") == 0){
        printf("yes\n");
    }
    else if(strcmp(weather.outlook, "rain") == 0 && weather.wind == 'F'){
        printf("yes\n");
    }
    else if(strcmp(weather.outlook, "sunny") == 0 && weather.humidity <= 77.5){
        printf("yes\n");
    } 
    else{
        printf("no\n");
    }
}
