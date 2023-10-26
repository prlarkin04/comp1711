#include <stdio.h>
#include <stdlib.h>

int main(){
    int nums[200];
    char line[100];
    int counter = 0;

    FILE* input = fopen("input.txt", "r");

    while(fgets(line,100,input)){
        nums[counter] = atoi(line);
        printf("%d\n", nums[counter]);
        counter++;
    }
    
    fclose(input);
}

