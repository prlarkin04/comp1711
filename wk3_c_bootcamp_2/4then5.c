#include <stdio.h>

int main() {
    int num = 5;

    if (num % 4 == 0)
    {
        if( num % 5 == 0)
        {
            printf("Number is divisible by 4 and 5\n");
        }
        else
        {
            printf("Number divisible by 4 but not 5 ");
        }
    } 
    else
    {
        printf("Number not divisible by 4 and 5");
    }
}