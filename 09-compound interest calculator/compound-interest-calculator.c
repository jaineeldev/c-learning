#include <stdio.h>
#include <math.h>

int main() {

    // COMPOUND INTEREST CALCULATOR

    double principal =  0.0;
    double rate = 0.0;
    int years = 0;
    int timesComponded = 0;
    double total = 0.0;

    printf("Compount Interest Calculator\n");

    printf("Enetr the principal (P): ");
    scanf("%lf",  &principal);

    printf("Eneter the interest rate % (r): ");
    scanf("%lf", &rate);
    rate = rate /100;

    printf("Enter the number of years (t): ");
    scanf("%d", &years);

    printf("Enter number of times compounded per year (n): ");
    scanf("%d", &timesComponded);

    total = principal  * pow(1 + rate / timesComponded, timesComponded  * years);
    printf("After %d year/s, the total will be $%.2lf", years, total);

    return 0;
}