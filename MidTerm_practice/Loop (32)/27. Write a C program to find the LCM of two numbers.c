#include <stdio.h>

int main() {
    int a, b, num1, num2, hcf, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    a = num1;
    b = num2;

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    hcf = a;  
    lcm = (num1 * num2) / hcf;  

    printf("LCM = %d\n", lcm);
    return 0;
}
