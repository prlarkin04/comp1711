#include <stdio.h>
int main() {
    int mark;
    printf("Please enter student mark: ");
    scanf("%d", &mark);

    if (mark <50)
    {
        printf("Student has failed\n");
    }
    else if (mark >=70)
    {
        printf("Student has achieved distinction\n");
    }
    else if (mark >=50)
    {
        printf("Student has passed\n");
    }
    return(0);
}