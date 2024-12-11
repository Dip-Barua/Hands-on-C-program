#include <stdio.h>


int main(){

    float basic , HRA , DA , gross ;


    printf("Enter Your Salary : ");
    scanf("%f",&basic);

    if(basic <= 10000){
        HRA = basic * 0.2;
        DA = basic * 0.8;
        gross = basic + HRA + DA;
        printf("Gross salary : %f",gross);
    }
        else if(basic <= 20000 && basic >= 10000){
        HRA = basic * 0.25;
        DA = basic * 0.9;
        gross = basic + HRA + DA;
        printf("Gross salary : %f",gross);
    }
    else if(basic >= 20001){
        HRA = basic * 0.2;
        DA = basic * 0.8;
        gross = basic + HRA + DA;
        printf("Gross salary : %f",gross);
    }
}
