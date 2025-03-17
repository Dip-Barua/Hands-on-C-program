#include <stdio.h>

int main() {
    int num, reversed = 0, original, digit;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    original = num;  

    while (num > 0) {
        digit = num % 10; 
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    if (original == reversed) {
        printf("Palindrome\n");
    } else {
        printf("Not a Palindrome\n");
    }

    return 0;
}
