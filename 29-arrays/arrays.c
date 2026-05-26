#include  <stdio.h>

int main() {

    //array = a fixed size collection of elements of the same data type
    //(Similar to a variable but it holds more than 1  value)

    int numbers[] = {10, 20, 30, 40, 50, 60, 70, 80};
    char grades[] = {'A', 'B', 'C', 'D', 'E'};
    char name[] = "Jaineel";
    // numbers[0] = 100;
    // numbers[1] = 90;
    // numbers[2] = 80;
    // numbers[3] = 70;
    // numbers[4] = 60;


    // for(int i = 0; i < 5; i++){
    //     printf("%c ", grades[i]);
    // }

    //  for(int i = 0; i < 5; i++){
    //     printf("%d ", numbers[i]);
    // }

    //  for(int i = 0; i < 7; i++){
    //     printf("%c ", name[i]);
    // }

    // printf("%d\n", sizeof(numbers));
    // printf("%d\n", sizeof(numbers[0]));

    // int size = sizeof(numbers) / sizeof(numbers[0]);
     for(int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++){
        printf("%d ", numbers[i]);
    }


    // printf("%d", numbers[1]);
    // printf("%c", grades[2]);
    //  printf("%c", name[0]);
    // printf("%d\n", numbers[0]);
    // printf("%d\n", numbers[1]);
    // printf("%d\n", numbers[2]);
    // printf("%d\n", numbers[3]);
    // printf("%d\n", numbers[4]);

    return 0;
}