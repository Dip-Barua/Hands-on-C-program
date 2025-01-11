

#include <stdio.h>

int main(){

    float physics, mathematics, computer, total, percentage;
    

    printf("Enter marks of Physics: \n");
    scanf("%f",&physics);

    printf("Enter marks of Mathematics: \n");
    scanf("%f",&mathematics);

    printf("Enter marks of Computer: \n");
    scanf("%f",&computer);


total = physics + mathematics + computer ;

percentage = (total / 3);

printf("percentage = %.2f \n", percentage);

    if(percentage >= 90 && percentage <= 100) printf("Grade A ");
    else if(percentage >= 80  && percentage <= 100) printf("Grade B ");
    else if(percentage >= 70  && percentage <= 100) printf("Grade C ");
    else if(percentage >= 60  && percentage <= 100) printf("Grade D ");
    else if(percentage >= 40  && percentage <= 100) printf("Grade E ");
    else if(percentage <= 40 && percentage >= 1) printf("Grade F ");
    else printf("Invalid marks ");
}