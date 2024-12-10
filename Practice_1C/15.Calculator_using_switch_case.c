// Write a C program to create a Simple Calculator using a switch case.



#include <stdio.h>

int main(){

    float num_1, num_2, result;
    char operator;


    printf("Enter first number: \n");
    scanf("%f", &num_1);

    printf("Enter second number: \n");
    scanf("%f", &num_2);

    printf("Enter operator (+, -, *, /): \n");
    scanf(" %c", &operator);


    switch(operator){


        case '+':
            result = num_1 + num_2;
            printf(" %.2f + %.2f = %.2f", num_1, num_2 , result);
            break;

        case '-':
            result = num_1 - num_2;
            printf(" %.2f - %.2f = %.2f", num_1, num_2 , result);

            break;
        
        case '*':
            result = num_1 * num_2;
            printf(" %.2f * %.2f = %.2f", num_1, num_2 , result);

            break;
        
        case '/':
            if(num_2 == 0){
                printf("Error! Division by zero is not allowed.\n");

                return 1;
            }else{
                result = num_1 / num_2;
                printf(" %.2f / %.2f = %.2f", num_1, num_2 , result);

                break;
            }
            default:
            printf("Invalid operator! Please use +, -, *, or /.\n");
            break;


}
}
