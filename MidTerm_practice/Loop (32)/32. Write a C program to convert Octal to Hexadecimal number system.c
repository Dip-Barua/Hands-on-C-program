#include <stdio.h>

int main() {
    int octal, decimal = 0, base = 1, remainder;
    char hex[20];
    int i = 0;

    printf("Enter an octal number: ");
    scanf("%d", &octal);

    int temp = octal;
    
    while (temp > 0) {
        decimal += (temp % 10) * base;
        temp /= 10;
        base *= 8;
    }

    temp = decimal;
    
    while (temp > 0) {
        remainder = temp % 16;
        hex[i++] = (remainder < 10) ? (remainder + '0') : (remainder - 10 + 'A');
        temp /= 16;
    }

    printf("Hexadecimal: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hex[j]);
    }

    printf("\n");
    return 0;
}
