#include <stdio.h>

int main(){
    char ch;

    printf("Enter a letter: ");
    scanf("%c", &ch);

    if(ch >= 'a' && ch <= 'z'){
        printf("%c is a lowercase letter.\n", ch);
    }else if(ch >= 'A' && ch <= 'Z'){
        printf("%c is an uppercase letter.\n", ch);
    }else{
        printf("%c is not a letter.\n", ch);
    }
}