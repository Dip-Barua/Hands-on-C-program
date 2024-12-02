// Implement a simple calculator using switch-case.


#include <stdio.h>

int main() {

    float num1, num2;
    char operator;

    printf("Enter First Number:");
    scanf("%f", &num1);
    printf("Enter Second Number:");
    scanf("%f", &num2);
    printf("Enter The Operator:");
    scanf(" %c", &operator);


    switch (operator) {

        case '+':
            printf("Sum of the numbers= %.2f", num1 + num2);
            break;
        case '-':
            printf("Minus of the numbers= %.2f", num1 - num2);
            break;
        case '*':
            printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
            break;
        case '/':
        if (num2 != 0)
                {
                    printf("Division of the numbers= %.2f", num1 / num2);
                }
        else{
            printf("Error! Division by zero");
        }
        break;
        default:
        printf("Error! operator is not correct");


    }
}