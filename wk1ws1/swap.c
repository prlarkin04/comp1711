#include <stdio.h>
int main() {
    double first, second, temp;
    printf("Enter first number: ");
    scanf("%lf", &first);
    printf("Enter second number: ");
    scanf("%lf", &second);

    temp = first;
    first = second;
    second = temp;

    printf("Number one is now swapped to %lf\n", first);
    printf("Number two is now swapped to %lf\n", second);
    
return 0;
}