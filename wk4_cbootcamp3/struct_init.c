#include <stdio.h>
#include <string.h>

struct student {
    char name [20];
    char student_id [11]; // Assuming 10 digits.
    unsigned mark;
};

int main () {
    struct student new_student;
    printf("Enter your first and second name:\n"); //Scanf has problems with strings that have space in them
    scanf("%s", new_student.name);
    printf("Enter student ID:\n");
    scanf("%s", new_student.student_id);
    printf("Enter student mark:\n ");
    scanf("%u", &new_student.mark);


    printf("Student name: %s\n", new_student.name);
    printf("Student ID:   %s\n", new_student.student_id);
    printf("Final mark:   %u\n", new_student.mark);
    return 0;
}