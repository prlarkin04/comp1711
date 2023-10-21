#include <stdio.h>

void stringconcat(char string1, char string2)
{
    
}

int main()
{
    char string1[50];
    char string2[50];

    printf("Enter first string:");
    scanf("%s", string1);
    printf("Enter second string:");
    scanf("%s", string2);

    printf("The concatenated string is %s\n", stringconcat(string1, string2));
    
}