#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {

    // while loop = continue some code WHILE the condition remails true
    // Condition must be true for us to enter while loop

    // int number = 0;

    // while(number <= 0){
    //     printf("Enter a number greater than 0: ");
    //     scanf("%d", &number);
    // }

    // do{
    //     printf("Enter a number greater than 0: ");
    //     scanf("%d", &number);
    // }while(number <= 0);

    // char name[50]  = "";

    // printf("Enter your name: ");
    // fgets(name, sizeof(name), stdin);
    // name[strlen(name) - 1] = '\0';

    // while(strlen(name) == 0){
    //     printf("Name cannot be empty! Please eneter your name: ");
    //     fgets(name, sizeof(name), stdin);
    //     name[strlen(name) - 1] = '\0';
    // }

    // printf("Hello %s", name);

    bool isRunning =  true;
    char response = '\0';

    do{
        printf("You are playing a game\n");
        printf("Would you like to continue? (Y= yes, N= no): ");
        scanf(" %c", &response);

        if(response != 'Y' && response  != 'y'){
            isRunning = false;
        }

    }while(isRunning);
    printf("You exit the game");
    

    return 0;
}