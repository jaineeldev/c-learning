#include <stdio.h>
#include <stdbool.h>

// int square(int num){

//     return num * num;
// }

// double cube(double num){
//     return num * num * num;
// }

// double square(double num){

//     return num * num;
// }

// bool ageCheck(int age){
//     if(age >=18){
//         return true;
//     }
//     else{
//         return false;
//     }
//}

int getMax(int x, int y){
    if(x >= y){
        return x;
    }
    else
    return y;
}

int main(){

    //return = returns a value back to where you called a function

    // int x = square(2);
    // int y = square(3);
    // int z = square(4);

    // printf("%d\n", x);
    // printf("%d\n", y);
    // printf("%d\n", z);

    // double x = square(2);
    // double y = square(3);
    // double z = square(4);

    // printf("%lf\n", x);
    // printf("%lf\n", y);
    // printf("%lf\n", z);

    // double x = cube(2);
    // double y = cube(3);
    // double z = cube(4);

    // printf("%lf\n", x);
    // printf("%lf\n", y);
    // printf("%lf\n", z);

    // int age = 12;

    // if(ageCheck(age)){
    //     printf("You may sign up");
    // }
    // else{
    //     printf("You must be 18+ to sign up");
    // }

    int max = getMax(4, 3);

    printf("%d", max);

    return 0;
}