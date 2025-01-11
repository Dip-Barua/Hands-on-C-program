#include <stdio.h>

int main(){
    int a,b;
    char operator;
    

    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    printf("Enter operator (+, -, *, /):");
    scanf(" %c",&operator);

switch (operator){
    case '+':
        printf("Addition of %d and %d is %d",a,b,a+b);
        break;
    case '-':
        printf("Subtraction of %d and %d is %d",a,b,a-b);
        break;
    case '*':
        printf("Multiplication of %d and %d is %d",a,b,a*b);
        break;
    case '/':
        if(b!=0)
            printf("Division of %d and %d is %d",a,b,a/b);
        else
            printf("Error! Division by zero");
        break;
    default:
        printf("Error! Operator is not correct");
        break;
}




}