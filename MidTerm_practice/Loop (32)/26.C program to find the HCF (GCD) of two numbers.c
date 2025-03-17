#include <stdio.h>

int main() {
    int a, b, hcf;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    for (int i = (a < b ? a : b); i >= 1; i--) {
        if (a % i == 0 && b % i == 0) {
            hcf = i;
            break;
        }
    }

    printf("HCF (GCD) = %d\n", hcf);
    return 0;
}
