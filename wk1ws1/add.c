#include <stdio.h>
int main() {
    int a, b, c;

    printf("Please enter first number to add: ");
    scanf("%d", &a);
    printf("Please enter second number to add: ");
    scanf("%d", &b);

    c = a + b;

    printf ("The sum of adding %d and %d is %d\n", a, b, c);

return 0;
}