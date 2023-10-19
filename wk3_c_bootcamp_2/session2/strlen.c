#include <stdio.h>
int str_len(char string[50])
{
    int count = 0;
    while(string[count] != '\0')
    {
        count++;
    }
    return count;
}

int main()
{
    char string[30];
    printf("Please enter a string: " );
    scanf("%s", string);
    printf("The length of your string is: %d\n", str_len(string));

    return 0;
}