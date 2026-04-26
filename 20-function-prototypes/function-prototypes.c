#include <stdio.h>
#include <stdbool.h>

void hello(char name[50], int age); // function prototype
bool ageCheck(int age);

int main(){

    // function prototype  = Provide the compoiler w// infomatio about a functions:
    //name, return type and parameters beforre its actual defination.
    //Enables type checking and allows functions to be used before they're defined
    //Improves readability, organisation and helps prevent errors.

    hello("Jaineel", 22);
    
    if(ageCheck(22)){
        printf("You are old enough to work in the Krusty Krab");
    }
    else{
        printf("You must be 16 plus to woprk at the Krusty Krab");
    }

    return 0;
}

void hello(char name[50], int age){
    printf("Hello %s\n", name);
    printf("You are %d years old\n", age);
}

bool ageCheck(int age){
    return age >= 16;
}