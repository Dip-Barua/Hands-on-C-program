#include <stdio.h>

int main(){
    int amount ;
    int notes_1000 , notes_500 , notes_200 , notes_100 , notes_50 , notes_20 , notes_10 , notes_5 , notes_2 , notes_1 ;
    notes_1000 = notes_500 = notes_200= notes_100 = notes_50 = notes_20 = notes_10 = notes_5 = notes_2 = notes_1 = 0 ;



    printf("Enter the amount: ");
    scanf("%d", &amount);


    if(amount >= 1000){
        notes_1000 = amount / 1000;
        amount = amount % 1000;
    }
    if(amount >= 500){
        notes_500 = amount / 500;
        amount = amount % 500;
    }
    if(amount >= 200){

        notes_200 = amount / 200;
        amount = amount % 200;
    }
    if(amount >= 100){

        notes_100 = amount / 100;
        amount = amount % 100;
    }
    if(amount >= 50){

        notes_50 = amount / 50;
        amount = amount % 50;
    }
    if (amount >= 20) {
        notes_20 = amount / 20;
        amount = amount % 20;
    }
    if (amount >= 10) {
        notes_10 = amount / 10;
        amount = amount % 10;
    }
    if (amount >= 5) {
        notes_5 = amount / 5;
        amount = amount % 5;
    }
    if (amount >= 2) {
        notes_2 = amount / 2;
        amount = amount % 2;
    }
    if (amount >= 1) {
        notes_1 = amount / 1;
        amount = amount % 1;
    }


    printf("\nNumber of notes of bdt 1000: %d\n", notes_1000);
    printf("Number of notes of bdt 500: %d\n", notes_500);
    printf("Number of notes of bdt 200: %d\n", notes_200);
    printf("Number of notes of bdt 100: %d\n", notes_100);
    printf("Number of notes of bdt 50: %d\n", notes_50);
    printf("Number of notes of bdt 20: %d\n", notes_20);
    printf("Number of notes of bdt 10: %d\n", notes_10);
    printf("Number of notes of bdt 5: %d\n", notes_5);
}