#include <stdio.h>

int main(){
    
    int i , j , k , arr[5];
    
    for(i=0; i<5; i++){
        scanf("%d", &arr[i] );
    }
    
    for(i=0; i<5; i++){
        for(j=0; j<(5-i-1); j++){
            if(arr[j] > arr[j+1]){
                k= arr[j];
                arr[j]= arr[j+1];
                arr[j+1]= k ;
            }
        }
    }
    
    
    for(i=0; i<5; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}