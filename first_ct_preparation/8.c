// Calculate the factorial of a number.



#include <stdio.h>

int main(){

int number;

printf("Enter the number: \n");
scanf("%d",&number);

if(number < 0){
    printf("Factorial of negative value does not exists\n");
}
else{

    int factorial = 1;

    for(int i=1; i<=number; i++){
        factorial *= i;
    }
    printf("Factorial of %d is: %d\n", number, factorial);
}

}