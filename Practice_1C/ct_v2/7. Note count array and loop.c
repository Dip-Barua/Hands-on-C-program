#include <stdio.h>

int main(){
    int amount;
    int count_amount[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    int notes[10] ={0};

    printf("Enter the amount: ");
    scanf("%d", &amount);


    for(int i=0; i<10; i++){
        if(amount >= count_amount[i]){
            notes[i] =amount/count_amount[i];
            amount = amount % count_amount[i];
        
        }
    }

    for(int i=0; i<10; i++){
        if(notes[i] > 0){
            printf("%d Notes: %d\n", count_amount[i], notes[i]);
        }
    }
}