// Write a C program to check whether a character is an alphabet or not.

#include <stdio.h>

int main(){

    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if(ch >= 'a' && ch <= 'z'){
        printf("%c is a lowercase alphabet.\n", ch);
    }else if(ch >= 'A' && ch <= 'Z'){
        printf("%c is an uppercase alphabet.\n", ch);
    }
}