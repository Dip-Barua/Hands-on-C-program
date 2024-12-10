// Write a C program to check whether a number is even or odd.

#include <stdio.h>


int main(){
    int num;


printf("Enter any Number:");
scanf("%d",&num);

    if(num % 2 == 0) {
        printf("Number is Even");
    }else{
        printf("Number is Odd");
    }
}