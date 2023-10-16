#include <stdio.h>
int main() {
    int width;
    int height;
    int area;

    printf("Please enter width of rectangle: ");
    scanf("%d", &width);
    printf("Please enter height of rectangle: ");
    scanf("%d", &height);

    area = width * height;

    printf("The area of the rectangle is %d\n", area);

return 0;
}