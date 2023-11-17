#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "FitnessDataStruct.h"

// Struct moved to header file

// Define any additional variables here


// Global variables for filename and FITNESS_DATA array


// This is your helper function. Do not change it in any way.
// Inputs: character array representing a row; the delimiter character
// Ouputs: date character array; time character array; steps character array
void tokeniseRecord(const char *input, const char *delimiter,
                    char *date, char *time, char *steps) {
    // Create a copy of the input string as strtok modifies the string
    char *inputCopy = strdup(input);
    
    // Tokenize the copied string
    char *token = strtok(inputCopy, delimiter);
    if (token != NULL) {        strcpy(date, token);
    }
    
    token = strtok(NULL, delimiter);
    if (token != NULL) {
        strcpy(time, token);
    }
    
    token = strtok(NULL, delimiter);
    if (token != NULL) {
        strcpy(steps, token);
    }
    
    // Free the duplicated string
    free(inputCopy);

                    }




// Complete the main function
int main() 
{

    char option;
    int optionvalid = 0;
    char filename[500];

    while (optionvalid == 0)
    {
        printf ("\n");
        printf ("Menu Options:\n");
        printf ("A: Specify the filename to be imported\n");
        printf ("B: Display the total number of records in the file\n");
        printf ("C: Find the date and time of the timeslot with the fewest steps\n");
        printf ("D: Find the date and time of the timeslot with the largest number of steps\n");
        printf ("E: Find the mean step count of all the records in the file\n");
        printf ("F: Find the longest continuous period where the step count is above 500 steps\n");
        printf ("Q: Quit\n");
        printf ("Enter Choice: ");

        scanf(" %c", &option);

        switch (option)
        {
            case 'A':
            case 'a':
                printf ("Input Filename: ");
                scanf("%s", filename);
                FILE *input = fopen(filename, "r");
                if (input == NULL) 
                {
                    printf("Error: Could not find or open the file.\n");
                } 
                break;

            case 'B':
            case 'b':
                printf ("Total Records: ");
                break;

            case 'C':
            case 'c':
                printf("Fewest Steps: ");
                break;
            
            case 'D':
            case 'd':
                printf("Largest Steps: ");
                break;

            case 'E':
            case 'e':
                printf("Mean Steps:");
                break;

            case 'F':
            case 'f':
                printf("Longest Period Start: \n");
                printf("Longest Period End: ");
                break;


            case 'Q':
            case 'q':
                optionvalid = 1;
                    break;
            
            default:
                printf("Invalid option. Please enter a valid option.\n");
                    break;
        }
    }  
}









