// Determine whether a year is a leap year.



#include <stdio.h>

int y;
int main() {

        printf("Enter a year:");
        scanf("%d", &y);


        if((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0) ){

            printf("%d is a leap year", y);
        }
        else{
            printf("%d is not a leap year", y);
        }


}