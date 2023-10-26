#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define an appropriate struct
typedef struct {
	char date[11];
	char time[6];
	int steps;
} FITNESS_DATA;

// Define any additional variables here



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
    //an array of StepsTask's records
    FITNESS_DATA data[100];
    int buffer_size = 250;
    char line [buffer_size];
    int counter = 0;

    FILE *input = fopen("FitnessData_2023.csv", "r");

    char date[11];
    char time[6];
    char step[100];

    while(fgets(line, buffer_size, input))
    {
        tokeniseRecord(line, ",",date,time,step);
        strcpy(data[counter].date,date);
        strcpy(data[counter].time,time);
        data[counter].steps = atoi(step);
        counter++;

    }

    printf("Number of records in file: %d\n", counter);

    for (int i = 0; i < 3; i++)
    {
        printf("%s/", data[i].date);
        printf("%s/", data[i].time);
        printf("%d\n", data[i].steps);
    }

    
}
