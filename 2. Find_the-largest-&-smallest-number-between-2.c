#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1 );
    printf("Enter second number: ");
    scanf("%d", &num2 );

    if (num1 > num2) {
        printf("Largest: %d\n", num1);
        printf("Smallest: %d\n", num2);
    } else if (num1 < num2) {
        printf("Largest: %d\n", num2);
        printf("Smallest: %d\n", num1);
    } else {
        printf("Both numbers are equal.\n");
    }

    return 0;
}
