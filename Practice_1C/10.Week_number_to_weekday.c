// Write a C program to input the week number and print weekday.


#include <stdio.h>

int main(){

    int week_no;

    printf("Enter Week Number (1-7):");
    scanf("%d",&week_no);

switch(week_no){

    case 1:
         printf("Saturday.");
         break;

    case 2:
         printf("Sunday.");
         break;
         
    case 3:
        printf("Monday.");
        break;

    case 4:
        printf("Tuesday.");
        break;
        
    case 5:
        printf("Wednesday.");
        break;
     
    case 6:
        printf("Thursday.");
        break;

     case 7:
        printf("Friday.");
        break;

    default:
        printf("Invalid Week Number.");
        break;


}


}