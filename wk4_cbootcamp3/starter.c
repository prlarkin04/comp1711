#include <stdio.h>
#include <stdlib.h>

int main(){
    int nums[200];
    char line[100];
    char* filename = "input.txt";
    FILE* file = fopen(filename, "r");
    if (file == NULL){
        perror("File not found");
        return 1;
    }
    int buffer_size = 100;
    char line_buffer[buffer_size];
    while (fgets(line_buffer, buffer_size, file)!= NULL){
        printf("%s", line_buffer);
    }
    fclose(file);
    return 0;

}