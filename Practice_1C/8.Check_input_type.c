// Write a C program to input any character and check whether it is alphabet, digit, or special character.

#include <stdio.h>

int main(){
    char ch;

printf("Input any character:");
    scanf("%c", &ch);

    if(ch >= '0' && ch <= '9'){
        printf(" %c is a digit", ch);
    }else if((ch >= 'a' && ch <= 'z' ) || (ch >= 'A' && ch <= 'Z' )){
        printf(" %c is an alphabet", ch);
    }else{
        printf(" %c is a special character", ch);
    }
}