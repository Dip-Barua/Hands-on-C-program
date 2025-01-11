#include <stdio.h>

int main(){
    int num , num_1;
    int sum=0;
    printf("Enter a number: ");
    scanf("%d", &num);

    for(int i = 0; i < num; i++){
        scanf("%d", &num_1 );

        sum += num_1;
    }
    printf("Sum of numbers is: %d", sum);


}