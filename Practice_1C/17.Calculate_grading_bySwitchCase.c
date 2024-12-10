// Write a C program using a switch-case statement to input marks of a subject and calculate the grade according to the following:
//     - Marks ≥ 90: Grade A
//     - Marks ≥ 80: Grade B
//     - Marks ≥ 70: Grade C
//     - Marks ≥ 60: Grade D
//     - Marks ≥ 40: Grade E
//     - Marks < 40: Grade F



#include <stdio.h>


int main(){

int marks;

printf("Enter the marks: ");
scanf("%d", &marks);

    if (marks < 0 || marks > 100) {
        printf("Invalid marks! Please enter marks between 0 and 100.\n");
        return 1;
    }

switch(marks/10){


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
        case 5:
        case 4:
            printf("Grade E\n");
            break;
        default:
            printf("Grade F\n");
            break;
    }

}


