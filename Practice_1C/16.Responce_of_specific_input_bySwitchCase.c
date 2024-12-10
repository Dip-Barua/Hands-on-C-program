//  Write a C program to take an input character variable and print one of the following messages:
//     - RED, if either `r` or `R` is assigned to the variable.
//     - GREEN, if either `g` or `G` is assigned to the variable.
//     - BLUE, if either `b` or `B` is assigned to the variable.
//     - BLACK, if any other character is assigned.


#include <stdio.h>

int main(){

    char color;


    printf("Enter a character (r, g, b, R, G, B): ");
    scanf(" %c", &color);


switch(color){

    case 'r':
    case 'R':
        printf("RED\n");
        break;

    case 'g':
    case 'G':
        printf("GREEN\n");
        break;

    case 'b':
    case 'B':
        printf("BLUE\n");
        break;

    default:
        printf("Out of scope\n");
        break;
}


}