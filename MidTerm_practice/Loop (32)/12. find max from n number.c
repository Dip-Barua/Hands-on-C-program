#include <stdio.h>

int main(){
    int n , num = 0 , max = 0;

    printf("Enter the number of elements: ");
    scanf("%d",&n);


    for(int i=1; i<=n; i++){
        printf("Enter element %d: ", i);
        scanf("%d",&num);

        if(num > max){
            max = num;
        }
        
    } 
    printf("The maximum number is: %d", max);
}