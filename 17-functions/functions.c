#include <stdio.h>
#include <string.h>

void happyBirthday(char name[], int age){
    printf("\nHappy Birthday to you!");
    printf("\nHappy Birthday to you!");
    printf("\nHappy Birthday dear %s!", name);
    printf("\nHappy Birthday to you!");
    printf("\nYou are %d years old!\n", age);
}

int main() {
    //function = A reusable section of code that can be invoked "called"
    //Arguments can be sent to a function so it can be used
    char name[50] = "";
    int age = 0;
    
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    printf("Enter your age: ");
    scanf("%d", &age);

    happyBirthday(name, age);

    // printf("\nHappy Birthday to you!");
    // printf("\nHappy Birthday to you!");
    // printf("\nHappy Birthday dear [name]!");
    // printf("\nHappy Birthday to you!");
    // printf("\nYou are [age] years old!\n");

    return 0;
}

