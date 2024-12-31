// Determine Eligibility for CSE Admission with given marks range


#include <stdio.h>

int main(){
    int math , phy , chem , total , total_math_phy;

    printf("Enter marks in Math: ");
    scanf("%d", &math);
    printf("Enter marks in Physics: ");
    scanf("%d", &phy);
    printf("Enter marks in Chemistry: ");
    scanf("%d", &chem);



    if(math>=65 && phy >= 55 && chem >= 50 && (total >= 190 || total_math_phy >= 140)){
        printf("Eligible for CSE Admission.\n");

    }else{
        printf("Not Eligible for CSE Admission.\n");
    }
}