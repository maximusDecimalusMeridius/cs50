#include <stdio.h>

int main (void){
    int length;

    printf("How many scores would you like to average? ");
    scanf("%i", &length);

    int scores[length];
    int scoreInput;
    int sum = 0;

    for(int i = 0; i < length; i++){
        printf("Enter score: ");
        scanf("%i", &scoreInput);
        scores[i] = scoreInput;
        sum += scoreInput;
    }
    
    float average = sum / (float)length;
    printf("You entered: ");
    for(int i = 0; i < length; i++){
        printf("%i ", scores[i]);
    }
    
    printf("\nThe average is %f\n", average);
}