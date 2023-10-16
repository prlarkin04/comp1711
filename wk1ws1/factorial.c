#include <stdio.h>
int main() {
    int num, i, f=1;
    printf("Enter number to calculate factorial of: ");
    scanf("%d", &num);

    for(i=1; i<=num; i++)
        f = f * i;


    printf("The factorial of %d is %d\n", num, f);

    return 0;

}
