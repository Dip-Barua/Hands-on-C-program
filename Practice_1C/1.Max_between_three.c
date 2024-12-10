// Write a C program to find the maximum between three numbers.


#include <stdio.h>

int main(){
int a , b , c ;

printf("Enter the first number:\n");
scanf("%d",&a);

printf("Enter the second number:\n");
scanf("%d",&b);

printf("Enter the third number:\n");
scanf("%d",&c);

if(a > b && a < c){
    printf("%d is the largest number.\n",a);
}else if(b > c){
    printf("%d is the largest number.\n",b);
}
else{
    printf("%d is the largest number.\n",c);
}
}