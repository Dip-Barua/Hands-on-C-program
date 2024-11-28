#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (; num != 0; num /= 10) {
        remainder = num % 10; 
        reversed = reversed * 10 + remainder; 
    }

    printf("Reversed number is: %d\n", reversed);

    return 0;
}
