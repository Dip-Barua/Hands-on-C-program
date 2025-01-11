#include <stdio.h>

int main(){
    int base , power ;
    long long result = 1 ;

    printf("Enter base number: ");
    scanf("%d",&base);
    
    printf("Enter power: ");
    scanf("%d",&power);

    for(int i=1 ; i<=power ; i++){
        result *= base ;
    }
    
    printf("Result: %lld",result);
}