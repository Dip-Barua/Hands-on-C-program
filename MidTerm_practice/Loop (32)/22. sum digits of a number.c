#include <stdio.h>

int main() {
    int num, sum = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (; num != 0; num /= 10) {
        remainder = num % 10; 
        sum += remainder;
    }

    printf("Sum of digits is: %d\n", sum);

    return 0;
}