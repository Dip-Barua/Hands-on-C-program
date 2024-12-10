// Write a C program to check whether a number is negative, positive, or zero.


#include <stdio.h>


int main(){
    int num;

    printf("Enter any number: \n");
    scanf("%d",&num);

    if(num<=0){
        if(num==0){
            printf("Number is Zero \n");
            return 0;
        }

        printf("Number is Negative \n");
    }else{
        printf("Number is Positive \n");
    }
}