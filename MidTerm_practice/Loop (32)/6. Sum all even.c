#include <stdio.h>

int main(){

    int n  , sum=0;

    printf("Enter any even number: ");
    scanf("%d", &n);


    for(int i=2 ; i <=n ; i+=2){
        sum = sum+i;

    }
    printf("Sum of  %d th Even numbers is: %d\n", n, sum);
}