#include <stdio.h>

int main() {
    int a = 72;
    int correct = 0;
    int guess;
    int lives = 3;

    while (lives > 0)
    {
         while (correct == 0)
        {

            printf("Please enter your guess: ");
            scanf("%d", &guess);

            if (guess == a)
            {
                printf("You guessed correctly\n");
                correct = (1);
            }
            else
            {
                printf("You guessed incorrectly\n");
                (lives -=1 );
                if(guess > a)
                {
                    printf("Lower\n");
                }
                else
                {
                    printf("Higher\n");
                }            
            }
        }
    }

   
return (0);
}