// Write a C program to check whether a number is divisible by 5 and 11 or not.


#include <stdio.h>

int main(){

    int num;

    printf("Enter any number:");
    scanf("%d",&num);

    if(num % 5 == 0){
        printf("Number is divisible by 5");
    }else if(num % 11 == 0){
        printf("Number is divisible by 11");
    }
}