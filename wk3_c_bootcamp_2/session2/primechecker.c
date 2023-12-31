#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0; // 0 and 1 are not prime numbers
    }
    
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 0; // It's not a prime number
        }
    }
    
    return 1; // It's a prime number
}

int main() {
    int num;
    printf("Enter a number to be checked: ");
    scanf("%d", &num);

    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
