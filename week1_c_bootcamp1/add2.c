#include <stdio.h>
int main(){
    int num1;
    int num2;
    int num3;

    printf("Please enter first number: ");
    scanf("%d", &num1);
    printf("Please eenter second number: ");
    scanf("%d", &num2);

    num3 = num1 + num2;

    printf("The product of Number 1: %d and Number 2 %d is: %d\n", num1, num2, num3);

    return 0;

}