//  Write a C program to input marks of a subject and calculate grade according to the following:
//     - Marks ≥ 90: Grade A
//     - Marks ≥ 80: Grade B
//     - Marks ≥ 70: Grade C
//     - Marks ≥ 60: Grade D
//     - Marks ≥ 40: Grade E
//     - Marks < 40: Grade F



#include <stdio.h>


int main(){

    int marks;

printf("Enter Your Marks:");
scanf("%d",&marks);


    if(marks >= 90 && marks <= 100) printf("Grade A ");
    else if(marks >= 80  && marks <= 100) printf("Grade B ");
    else if(marks >= 70  && marks <= 100) printf("Grade C ");
    else if(marks >= 60  && marks <= 100) printf("Grade D ");
    else if(marks >= 40  && marks <= 100) printf("Grade E ");
    else if(marks <= 40 && marks >= 1) printf("Grade F ");
    else printf("Invalid marks ");
}