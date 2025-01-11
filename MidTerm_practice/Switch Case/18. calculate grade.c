#include <stdio.h>

int main(){

    int Marks;

    printf("Enter your marks: ");
    scanf("%d", &Marks);

     if (Marks < 0 || Marks > 100) {
        printf("Invalid marks! Please enter marks between 0 and 100.\n");
        return 1;
    }

    switch(Marks / 10){

        case 10: 
        case 9:
            printf("Grade A\n");
            break;
        case 8:
            printf("Grade B\n");
            break;
        case 7:
            printf("Grade C\n");
            break;
        case 6:
            printf("Grade D\n");
            break;
        case 4:
            printf("Grade E\n");
            break;
        default:
            printf("Grade F\n");
            break;
    }
}