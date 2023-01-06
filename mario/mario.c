#include <stdio.h>

//make a 3x3 brick of #
int main(void){

    int width = 5;
    int height = 5;

    printf("How many columns would you like? ");
    scanf("%i", &width);
    printf("How many rows would you like?");
    scanf("%i", &height);

    for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j++)
        if(j + 1 == width){
            printf("#");
        } else {
            printf("# ");
        }
        printf("\n");
    }

}