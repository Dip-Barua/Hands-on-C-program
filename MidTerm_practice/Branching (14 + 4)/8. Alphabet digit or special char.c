#include <stdio.h>

int main(){
    char ch;

    printf("Give any input: ");
    scanf("%c", &ch);

    if(ch >= '0' && ch <= '9'){\
        printf("The input is a digit.\n");
    }else if((ch >= 'a' && ch <= 'z' ) || (ch >= 'A' && ch <= 'Z')){
        printf("The input is an alphabet.\n");
    }else {
        printf("The input is a special character.\n");
    }
}