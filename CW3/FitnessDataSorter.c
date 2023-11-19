#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the struct for the fitness data
typedef struct {
    char date[11];
    char time[6];
    int steps;
} FitnessData;

// Function to tokenize a record
void tokeniseRecord(char *record, char delimiter, char *date, char *time, int *steps) {
    char *ptr = strtok(record, &delimiter);
    if (ptr != NULL) {
        strcpy(date, ptr);
        ptr = strtok(NULL, &delimiter);
        if (ptr != NULL) {
            strcpy(time, ptr);
            ptr = strtok(NULL, &delimiter);
            if (ptr != NULL) {
                *steps = atoi(ptr);
            }
        }
    }
}


int main()
{
char filename[500];
    int buffer_size = 250;
    char line[buffer_size];
    FitnessData data[100]; // Increase this array size if you expect more records
    int counter = 0;

    printf("Input Filename: ");
    scanf("%s", filename);
    FILE *input = fopen(filename, "r");
    if (input == NULL) {
        printf("Error: Could not find or open the file.\n");
        return 1;
    } else {
        printf("File successfully loaded\n");

        while (fgets(line, buffer_size, input)) {
            if (counter >= 100) {
                printf("Error: Too many records. Increase array size.\n");
                break;
            }

            tokeniseRecord(line, ',', data[counter].date, data[counter].time, &data[counter].steps);
            counter++;
        }

        fclose(input);

        // Perform validations after parsing
        int valid = 1;
        for (int i = 0; i < counter; i++) {
            if (strlen(data[i].date) != 10 || strlen(data[i].time) != 5 || data[i].steps <= 0 || data[i].steps > 9999) {
                valid = 0;
                break;
            }
        }

        if (valid) {
            // Sort the FitnessData array based on step count in descending order
            for (int i = 0; i < counter - 1; i++) {
                for (int j = i + 1; j < counter; j++) {
                    if (data[i].steps < data[j].steps) {
                        // Swap elements if steps are in descending order
                        FitnessData temp = data[i];
                        data[i] = data[j];
                        data[j] = temp;
                    }
                }
            }

            // Write sorted data to a .tsv file
            char outputFilename[510]; // Maximum length of 500 filename + 10 characters (.tsv extension)
            sprintf(outputFilename, "%s.tsv", filename); // Appending .tsv extension to the original filename

            FILE *output = fopen(outputFilename, "w");
            if (output == NULL) {
                printf("Error: Could not create the output file.\n");
                return 1;
            } else {
                printf("Writing sorted data to %s\n", outputFilename);

                // Writing data to the .tsv file
                for (int i = 0; i < counter; i++) {
                    fprintf(output, "%s\t%s\t%d\n", data[i].date, data[i].time, data[i].steps);
                }

                fclose(output);
                printf("Sorted data has been written to %s\n", outputFilename);
            }
        } else {
            printf("Error: Invalid data format in the CSV file.\n");
            return 1;
        }
    }

    return 0;
}
