#include <stdio.h>
#include <math.h>

int main() {
    int num, i = 2, isPrime = 1;

    printf("Enter a number to check if it is prime: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
    } else {
        while (i <= sqrt(num)) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
            i++;

        if (isPrime) {
            printf("%d is a prime number.\n", num);
        } else {
            printf("%d is not a prime number.\n", num);
        }
    }

    return 0;
}