#include <stdio.h>

int main() {
    int num;
    long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        for (int i = 1; i <= num; i++) {
            factorial *= i;
        }

        printf("The factorial of %d is: %lld\n", num, factorial);
    }

    return 0;
}
