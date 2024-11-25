#include <stdio.h>
#include <math.h>

int main() {
    int num, i, isPrime = 1;

    printf("Enter a number to check if it is prime: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("%d is not a prime number.\n", num); 
    } else {
        for (i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                printf("%d is not a prime number.\n", num); 
                break;
            }
        }
        if (i > sqrt(num)) {
            printf("%d is a prime number.\n", num); 
        }
    }

    return 0;
}
