#include <stdio.h>

int main(){

    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) ? printf("%c is a character " , ch) : printf("%c is not a character ", ch);
}