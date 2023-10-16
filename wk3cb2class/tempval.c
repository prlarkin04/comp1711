#include <stdio.h>
int main() {
    int temp;
    printf("Enter current temperature: ");
    scanf("%d", &temp);

    if (temp >40)
    {
        printf("Invalid Temperature: Too hot\n");
    }
    else if (temp < -10)
    {
        printf("Invalid Temperature: Too cold\n");
    }
    else
    {
        printf("Temperature is just right goldilocks\n");
    }
    return(0);
}