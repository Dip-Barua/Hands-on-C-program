#include <stdio.h>

int main(){
    int num , sum=0;
    printf("Enter a number: ");
    scanf("%d", &num);

    for(int i = 2; i<=num; i+=3){
        sum += i;
    }
    printf("Sum of 3rd integer from 2 to %d is: %d", num, sum);
}