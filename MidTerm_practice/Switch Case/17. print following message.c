#include <stdio.h>

int main(){

    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    switch(ch){

        case 'R' :
        case 'r' :
        printf("RED");
        break;

        case 'G' :
        case 'g' :
        printf("GREEN");
        break;

        case 'B' :
        case 'b' :
        printf("BLUE");
        break;

        default :
        printf("BLACK");
        break;
    }
}