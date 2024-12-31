// Print numbers between 1 and 500 divisible by 5

#include <stdio.h>

int main(){

    printf("Enter any number: ");

    for(int i=0; i<=5000 ; i++){
        if(i%5 == 0){
            printf("%d \n", i);
        }
    }
}