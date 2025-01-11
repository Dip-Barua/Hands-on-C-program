#include <stdio.h>

int main(){

    int num;

    printf("Enter a number: ");
    scanf("%d", &num);
    
    (num == 0) ? printf("Number is zero") :
    (num % 2 == 0) ? printf("Number is Even") : printf("Number is Odd");

}