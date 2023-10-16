#include <stdio.h>

int main() {
    int array[] = {2, 4, 6, 8, 10};
    int num = 0;

    for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++) {
        num = num + array[i];
    }
    printf("%d", num);

    return 0;
}
