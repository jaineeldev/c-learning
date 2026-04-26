#include <stdio.h>

int main(){

    //break = Break out of loop (aka STOP)
    //continue = Skip current cycle  of loop (aka SKIP)

    for(int i = 1; 1 <= 10; i++){

        if(i == 4){
            continue;
        }

        printf("%d\n", i);
    }

    return 0;
}