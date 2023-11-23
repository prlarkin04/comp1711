#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "FitnessDataStruct.h"

// Struct moved to header file

// Define any additional variables here
int counter = 0;


// Global variables for filename and FITNESS_DATA array
FITNESS_DATA data[100];
char filename[500];



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
    int buffer_size = 250;
    char line [buffer_size];
    char date[11];
    char time[6];
    char step[100];

    int feweststeps;
    int indexfewest;
    int largeststeps;
    int indexlargest;
    int steptotal;
    int stepmean;
    int longeststartindex = -1;
    int longestendindex = -1;
    int currentstartIndex = -1;
    int currentendIndex = -1;

    

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
                counter = 0;
                printf ("Input Filename: ");
                scanf("%s", filename);
                FILE *input = fopen(filename, "r");
                if (input == NULL) 
                {
                    printf("Error: Could not find or open the file.");
                    return 1;
                } 
                else
                {
                printf("File successfully loaded");
                while(fgets(line, buffer_size, input))
                {
                    tokeniseRecord(line, ",",date,time,step);
                    strcpy(data[counter].date,date);
                    strcpy(data[counter].time,time);
                    data[counter].steps = atoi(step);
                    counter++;

                }
                }
                break;

            case 'B':
            case 'b':
                printf ("Total Records: %d", counter);
                break;

            case 'C':
            case 'c':
                feweststeps= data[0].steps; // Initialize with the first record's steps
                indexfewest = 0; // Initialize index for the record with the fewest steps

                for (int i = 1; i < counter; i++)
                {
                    if (data[i].steps < feweststeps)
                    {
                        feweststeps = data[i].steps;
                        indexfewest = i;
                    }
                }
                printf("Fewest Steps:  %s %s", data[indexfewest].date, data[indexfewest].time);
                break;
            
            case 'D':
            case 'd':
                largeststeps= data[0].steps; // Initialize with the first record's steps
                indexlargest = 0; // Initialize index for the record with the largest steps

                for (int i = 1; i < counter; i++)
                {
                    if (data[i].steps > largeststeps)
                    {
                        largeststeps = data[i].steps;
                        indexlargest = i;
                    }
                }
                printf("Largest Steps:  %s %s", data[indexlargest].date, data[indexlargest].time);
                break;

            case 'E':
            case 'e':
                steptotal = 0;
                for (int i = 0; i < counter; i++)
                {
                    steptotal=steptotal+data[i].steps;
                }
                stepmean = steptotal/counter;
                printf("Mean step count: %d", stepmean);
                break;

            case 'F':
            case 'f':

                for (int i = 0; i < counter; i++) {
                    if (data[i].steps > 500) {
                        if (currentstartIndex == -1) {
                            // Found the start of a new period
                            currentstartIndex = i;
                        }
                        // Update the end index of the current period
                        currentendIndex = i;
                    } else {
                        // Check if the current period is longer than the longest found so far
                        if (currentendIndex - currentstartIndex > longestendindex - longeststartindex) {
                            // Update the longest period indices
                            longeststartindex = currentstartIndex;
                            longestendindex = currentendIndex;
                        }
                        // Reset the current period indices to search for the next period
                        currentstartIndex = -1;
                        currentendIndex = -1;
                    }
                }

                // Check if the last period is longer than the longest found so far
                if (currentendIndex - currentstartIndex > longestendindex - longeststartindex) {
                    longeststartindex = currentstartIndex;
                    longestendindex = currentendIndex;
                }

                // Print the start and end dates and times of the longest continuous period
                if (longeststartindex != -1 && longestendindex != -1) {
                    printf("Longest Period Start: %s %s\n", data[longeststartindex].date, data[longeststartindex].time);
                    printf("Longest Period End: %s %s", data[longestendindex].date, data[longestendindex].time);
                } else {
                    printf("No period with steps above 500 found.\n");
                }
                break;


            case 'Q':
            case 'q':
                optionvalid = 1;
                    break;
            
            default:
                printf("Invalid choice. Try again.");
                    break;
        }
    }  
}









