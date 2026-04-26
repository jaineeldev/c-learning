#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    //Pseudo-random = Appear random buy are determined by a mathemarical formula that uses a seed value
    //to generate a perdictable sequence of numbers. advanced Mersenne Twitser or /dev/random
    
    srand(time(NULL));

    int min = 50;
    int max = 100;

    int randomNum1 = (rand() % (max - min + 1)) + min;
    int randomNum2 = (rand() % (max - min + 1)) + min;
    int randomNum3 = (rand() % (max - min + 1)) + min;

    printf("%d %d %d", randomNum1, randomNum2, randomNum3);

    return 0;
}