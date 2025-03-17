#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    char hex[20];
    int decimal = 0, length, base = 1;

    printf("Enter a hexadecimal number: ");
    scanf("%s", hex);

    length = strlen(hex);

    for (int i = length - 1; i >= 0; i--) {
        if (hex[i] >= '0' && hex[i] <= '9') {
            decimal += (hex[i] - '0') * base;
        } 
        else if (hex[i] >= 'A' && hex[i] <= 'F') {
            decimal += (hex[i] - 'A' + 10) * base;
        } 
        else if (hex[i] >= 'a' && hex[i] <= 'f') {
            decimal += (hex[i] - 'a' + 10) * base;
        } 
        else {
            printf("Invalid hexadecimal number!\n");
            return 1;
        }
        base *= 16;
    }

    printf("Decimal: %d\n", decimal);
    return 0;
}
