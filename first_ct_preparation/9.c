// Print all prime numbers within a given range.

#include <stdio.h>

int isPrime(int number){
    if (number <= 1) {
        return 0;
    }
    for(int i=2; i* i<=number; i++){

        if(number % i == 0){
            return 0;
        }
    }
    return 1;
}


int main(){
    int start, end;

    printf("Enter the range (start and end): ");
    scanf("%d %d", &start, &end);

    printf("Prime numbers between %d and %d are:\n", start, end);


    for(int number = start; number <= end; number++){
        if(isPrime(number)){
            printf("%d ", number);
        }
    }

}