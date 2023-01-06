#include <stdio.h>

int main(void) {
    int num1;
    int num2;
    int sum;
    char firstName[10];

    scanf("%d %d", &num1, &num2);
    sum = num1 + num2;

    printf("Enter your name: ");
    scanf("%s", firstName);
    printf("Hello %s!\n", firstName);
    printf("%d", num1);
    printf(" + %d", num2);
    printf(" = %d\n", sum);
}