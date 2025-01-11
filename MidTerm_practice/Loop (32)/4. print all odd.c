#include <stdio.h>

int main(){
    int num;


    printf("Enter an odd number: ");
    scanf("%d", &num);


    for(int i=1 ; i<=num; i+=2){
        printf("%d ", i);
    }

    
}