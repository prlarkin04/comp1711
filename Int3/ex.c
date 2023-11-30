#include <stdlib.h>
#include <stdio.h>
int main()
{
    int input;

    char* address = malloc(200*sizeof(char));
    int* data = malloc(70*sizeof(int));

    printf("Input the size of samples: ");
    scanf("%d", &input);

    double* samples = malloc(input*sizeof(double));
}