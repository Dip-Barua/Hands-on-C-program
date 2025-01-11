#include <stdio.h>

int main(){
    int a ;

    printf("Enter a number: ");
    scanf("%d", &a);

    (a>0) ? printf("Number is Positive") : (a<0)? printf("Number is Negative") : printf("Number is zero") ;
}