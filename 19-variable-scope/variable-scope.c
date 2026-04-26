#include <stdio.h>


int result  = 0; //GLOBAL SCOPE (hard to debug)

// int add(int x, int y){
//     int result = x + y;
//     return result;
// }

int subtract(int x,  int y){
    int result = x - y;
    return result;
}


int main(){

    //variable sope = Refers to where a variable is regonise and accessible.
    //Variables can share ge same name if there in different scopes {}

    // int result = add(3, 4);
    // printf("%d", result);

    int x  = 5; // LOCAL
    int y = 6; 
    int result = subtract(x, y);
    
    printf("%d", result);

    return  0;
}