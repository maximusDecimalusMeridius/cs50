#include <stdio.h>

// Function to add two numbers
int main(void) {
    int x, y, sum;

    //Prompt user for two numbers
    printf("x: ");
    scanf("%i", &x);
    printf("y: ");
    scanf("%i", &y);

    sum = x + y;

    //Output an equation and sum of the two numbers entered
    printf("%i + %i = %i\n", x, y, sum);

    if(x < y){
        printf("x is less than y\n");
    } else if (x > y){
        printf("x is greater than y\n");
    } else{
        printf("x is equal to y\n");
    }
}