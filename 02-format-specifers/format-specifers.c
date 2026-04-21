#include <stdio.h>

int main() {

    // Format specifier = Special tokens that begin with the % symbol
    // followed by a charater that specifies that data type and optional
    // modifers(widthm precision, flags). They control how the data is displayed

    int age = 22;
    float price = 9.99;
    double pi = 3.1415926535;
    char currency = '$';
    char name[] = "Jaineel Khatri";
    
    // printf("%d\n", age);
    // printf("%f\n", price);
    // printf("lf\n", pi);
    // printf("%c\n", currency);
    // printf("%s\n", name);

    //width

    // int num1 = 1;
    // int num2 = 10;
    // int num3 = -100;

    // printf("%5d\n", num1);
    // printf("%5d\n", num2);
    // printf("%5d\n", num3);

    //precision

    // float price1 = 19.99;
    // float price2 = 1.45;
    // float price3 = -100.00;

    // printf("%.2f\n", price1);
    // printf("%.2f\n", price2);
    // printf("%.2f\n", price3);

    // with and precision

    // float price1 = 19.99;
    // float price2 = 1.45;
    // float price3 = -100.00;

    // printf("%+7.2f\n", price1);
    // printf("%+7.2f\n", price2);
    // printf("%+7.2f\n", price3);



    return 0;
}