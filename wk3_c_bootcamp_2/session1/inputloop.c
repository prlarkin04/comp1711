#include <stdio.h>

int main() {
    int input;
    int term = -1;

    while (input >0 || input<=100)
    {
        printf("Enter Number: ");
        scanf("%d",&input);
        if (input >100)
        {
            printf("Number has to be from 0-100\n");
        }
        else if (input == -1)
        {
            printf("Terminating condition entered\n");
            break;
        }
        
    }
    return (0); 
}