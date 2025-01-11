#include <stdio.h>

int main(){
    int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    (a % 5 == 0 && a % 11 == 0) ? printf("Number is divisible by both 5 and 11") :
    (a % 5 == 0 ) ? printf("Only divisible by 5") : 
    printf("Number is only divisible by 11");

    return 0;
}
