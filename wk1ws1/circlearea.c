#include <stdio.h>
int main() {
    float pi, area;
    float radius;
    float radiussquared;

    pi = 3.14;

    printf("Please enter radius of circle: ");
    scanf("%f", &radius);

    radiussquared = radius * radius;
    
    area = pi * radiussquared;

    printf("The area of the circle is %f\n", area);

return 0;
}