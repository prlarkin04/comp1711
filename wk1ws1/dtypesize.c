#include <stdio.h>
#include <limits.h>
#include <float.h>
int main() {
    int a;
    float b;
    double c;
    char d;

    a = INT_MAX;
    b = FLT_MAX;
    c = DBL_MAX;
    d = CHAR_MAX;

    printf("Largest integer = %d\n", a);
    printf("Largest float = %f\n", b);
    printf("Largest double = %f\n", c);
    printf("Largest character = %d\n", d);

return 0;
}