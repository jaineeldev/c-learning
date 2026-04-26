#include <stdio.h>
#include <windows.h>

int main(){

    // for loop = Repeat some code for a limited number of times
    //  for (initialisation; conidion; update)

    for(int i = 10; i >= 0; i--){
        Sleep(1000);
        printf("%d\n", i);
    }

    printf("HAPPY NEW YEAR");

    return 0;
}