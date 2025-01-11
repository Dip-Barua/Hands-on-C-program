#include <stdio.h>

int main(){
    int num;


    printf("Enter an even number: ");
    scanf("%d", &num);


    for(int i=2 ; i<=num; i+=2){
        printf("%d ", i);
    }

    
}