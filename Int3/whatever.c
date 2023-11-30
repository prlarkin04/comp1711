#include <stdlib.h>
#include <stdio.h>

int main()
{
    printf("An int is size: %ld\n", sizeof(int));

    printf("A double is size: %ld\n", sizeof(double));

    printf("A character is size: %ld\n", sizeof(char));

    char* name = "Jonathan";
    printf("The word %s is size %ld\n",name, sizeof(name));
}