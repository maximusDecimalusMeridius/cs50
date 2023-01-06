#include <stdio.h>

int main(void){
    int input;

    printf("Enter a number: ");
    scanf("%i", &input);
    
    if(input % 2 == 0){
        printf("Your number is even.");
    } else {
        printf("Your number is odd.");
    }
}