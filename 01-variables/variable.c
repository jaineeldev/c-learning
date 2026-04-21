#include <stdio.h>
#include <stdbool.h>

int main() {
    
    // variable = a reusable container for storing data values
    // it behaves as if it were the value that it contains

    // int age = 22; 
    // int year = 2026;
    // int quantity = 1;

    // printf("You are %d years old\n", age);
    // printf("The year is %d\n", year);
    // printf("You have ordered %d x Ramen\n", quantity);
    //------------------------------------------------------
    // float gpa =   2.5;
    // float price = 5.99;
    // float temperature = 25.7;

    // printf("Your GPA is %f\n", gpa);
    // printf("The price is $%f\n", price);
    // printf("The temperature is %f\n", temperature);

    // double pi = 3.141592653589;
    // double e = 2.7182818284590;

    // printf("The value of pi is %.15lf\n", pi);
    // printf("The value of e is %.15lf\n", e);
    //---------------------------------------------
    // char grade = 'A';
    // char symbol = '!';
    // char currency = '$';

    // printf("your grade is %c\n", grade);
    // printf("your favourite symbol is %c\n", symbol);
    // printf("The currency is %c", currency);

    // char name[] = "Jaineel Khatri";
    // char food[] = "Ramen";
    // char email[] = "jaineelk.dev@gmail.com";

    // printf("Hello %s\n", name);
    // printf("Your favourite food is %s\n", food);
    // printf("Your email is %s\n", email);
    //---------------------------------------------
    bool isOnline = true;
    bool isStudent = false;
    bool forSale = false;

    // printf("%d", isOnline);
    if(forSale){
        printf("That item is for sale");
    }
    else{
        printf("Item is NOT for sale");
    }


    return 0;
}