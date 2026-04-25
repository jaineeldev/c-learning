#include <stdio.h>

int main(){

    //TEMPERATURE CONVERSION PROGRAM

    char choice = '\0';
    float fahrenheit = 0.0f;
    float celscius = 0.0f;


    printf("Temperature Conversion Program\n");
    printf("C. Celsius to Fahrenheit\n");
    printf("F. Fahrenheit to Celsius\n");
    printf("IS the temp in Celsius (C) or Fahrenheit (F)?: ");
    scanf("%c", &choice);

    if(choice == 'C'){
        // C to F
        printf("Eneter the temperature in Celsius: ");
        scanf("%f", &celscius);
        fahrenheit = (celscius  * 9/5) + 32; // C to F
        printf("%.1f Celsius is equal to %.1f Fahrenheit\n", celscius, fahrenheit);
    }
    else if(choice == 'F'){
        printf("Eneter the temperature in Fahrenheit: ");
        // F to C
        scanf("%f", &fahrenheit);
        celscius = (fahrenheit - 32) * 5/9;
        printf("%.1f Fahrenheit is equal to %.1f Celsius\n", fahrenheit, celscius);
    }
    else{
        printf("Invalid option, please choice either C for Celsius or F for Fahrenheit");
    }

    return 0;
}