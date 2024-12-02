// Print the grade based on marks using conditional statements


#include<stdio.h>

int main(){

int marks;

    printf("Enter your marks: ");
    scanf("%d", &marks);


    if(marks >=80){
        printf("Grade: A+");
    }
    else if(marks >=70 && marks < 80){
        printf("Grade: A");
        }
    else if(marks >=60 && marks < 70){
        printf("Grade: A-");
    }
    else if(marks >=50 && marks < 60){
        printf("Grade: B");
    }
    else if(marks >=40 && marks < 50){
        printf("Grade: C");
    } else if (marks >= 33 && marks <40) {
        printf("Grade D\n");
    } else {
        printf("Grade F (Fail)\n");
    }



}