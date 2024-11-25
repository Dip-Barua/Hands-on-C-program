#include <stdio.h>

int main() {
    int score;

    printf("Enter your marks (0 to 100): ");
    scanf("%d", &score);

    if (score < 0 || score > 100) {
        printf("Invalid Marks! Please enter a value between 0 and 100.\n");
    }

    switch (score / 10) {
        case 10: 
        case 9: 
        case 8: 
            printf("Grade: A+\n");
            break;
        case 7: 
            printf("Grade: A\n");
            break;
        case 6: 
            printf("Grade: B\n");
            break;
        case 5: 
            printf("Grade: C\n");
            break;
        case 4: 
            printf("Grade: D\n");
            break;
        default: 
            printf("Grade: F\n");
    }

    return 0;
}
