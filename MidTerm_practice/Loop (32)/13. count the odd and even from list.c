#include <stdio.h>

int main(){

    int n , number, count_odd =0, count_even=0 ;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

for(int i = 1 ; i <= n ; i++){
    printf("Enter number %d: " , i);

    scanf("%d", &number);

    if(number % 2 == 0){
        count_even++;
    }else{
        count_odd++;
    }
    
}

printf("Number of even numbers: %d\n", count_even);

printf("Number of odd numbers: %d\n", count_odd);

}