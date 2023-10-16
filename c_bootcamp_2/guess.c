#include <stdio.h>

int main() {
    int a = 72;
    int correct = 0;
    int guess;
    int lives = 3;

    if (lives > 0)
    {

        
        while (lives > 0)
        {

            printf("Please enter your guess: ");
            scanf("%d", &guess);

            if (guess == a)
            {
                printf("You guessed correctly\n");
                break;
            }
            else if (guess != a)
            {
                printf("You guessed incorrectly\n");
                lives -=1;
                if (guess > a)
                {
                    printf("Lower\n");
                    printf("%d lives left\n",lives);
                }
                else if (guess < a)
                {
                    printf("Higher\n");
                    printf("%d lives left\n",lives);
                }            
            }
        }
        
    }
    if (lives == 0)
    {
        printf("You are out of lives!\n");
    }
    return (0);
}