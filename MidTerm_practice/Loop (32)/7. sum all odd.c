#include <stdio.h>

int main(){

    int n  , sum=0;

    printf("Enter any odd number: ");
    scanf("%d", &n);


    for(int i=1 ; i <=n ; i+=2){
        sum = sum+i;

    }
    printf("Sum of %d th odd numbers is: %d\n", n, sum);
}