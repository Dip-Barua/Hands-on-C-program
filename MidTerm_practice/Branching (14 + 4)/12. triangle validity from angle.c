#include <stdio.h>

int main(){
    float a , b , c ;

    printf("Enter three angles: ");
    scanf("%f %f %f", &a, &b, &c);

    if(a + b + c == 180){
        printf("The given angles can form a valid triangle.");
    } else {
        printf("The given angles cannot form a valid triangle.");
    }
}