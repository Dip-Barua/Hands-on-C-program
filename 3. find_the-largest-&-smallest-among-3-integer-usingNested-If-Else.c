#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 > num2) {
        if (num1 > num3) {
            printf("Largest: %d\n", num1);
        } else {
            printf("Largest: %d\n", num3);
        }
    } 
    
    else {
        if (num2 > num3) {
            printf("Largest: %d\n", num2);
        } else {
            printf("Largest: %d\n", num3);
        }
    }

    if (num1 < num2) {
        if (num1 < num3) {
            printf("Smallest: %d\n", num1);
        } else {
            printf("Smallest: %d\n", num3);
        }
    } 
    else {
        if (num2 < num3) {
            printf("Smallest: %d\n", num2);
        } else {
            printf("Smallest: %d\n", num3);
        }
    }

    return 0;
}
