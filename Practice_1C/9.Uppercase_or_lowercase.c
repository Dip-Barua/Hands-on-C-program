// Write a C program to check whether a character is uppercase or lowercase alphabet.


#include <stdio.h>

int main(){
    char ch;

    printf("Enter any cahracter:");
    scanf(" %c",&ch);


    if(( ch >= 'a' && ch <= 'z')){
        printf(" %c is an lowercase Letter.\n",ch);
    }else if( ch >= 'A' && ch <= 'Z' ){
        printf(" %c is a Uppercase Letter.\n",ch);
    }else{
        printf(" %c is not an alphabet.\n",ch);
    }

}