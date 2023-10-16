#include <stdio.h>
int main() {
    double fahr, celsius;
    
    printf("Enter fahrenheit temp to be converted: ");
    scanf("%lf", &fahr);

    celsius = (fahr-32) * 5/9;

    printf("The fahrenheit temp in celsius is %lf\n", celsius);

    return 0;


}