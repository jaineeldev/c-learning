#include  <stdio.h>
#include <stdbool.h>

int main() {

    // logical operators = Used to combine or modify boolean expressions

    // && = AND
    // || = OR
    // ! = NOT

    // int temp = 25;
    bool isSunny = true;

    // if(temp > 0 && temp < 30){
    //     printf("The temperature is good");
    // }
    // else{
    //     printf("The temperature is bad");
    // }

    // if(temp <= 0 || temp >= 30){
    //     printf("The temperature is BAD");
    // }
    // else{
    //     printf("The temperature is GOOD");
    // }

    if(!isSunny){
        printf("It is CLOUDY outside");
    }
    else{
        printf("It is SUNNY outside");
    }

    return 0;
}