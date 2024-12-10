// Write a C program to count the total number of notes in a given amount.

#include <stdio.h>

int main(){

    int amount ;
    int notes_1000 , notes_500 , notes_200 , notes_100 , notes_50 , notes_20 , notes_10 , notes_5 , notes_2 , notes_1 ;

    notes_1000 = notes_500 = notes_200= notes_100 = notes_50 = notes_20 = notes_10 = notes_5 = notes_2 = notes_1 = 0 ;


    printf("Enter the amount: ");
    scanf("%d",&amount);


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

printf("Total Number of notes: \n");

    if (notes_1000 > 0) printf("1000 Notes: %d\n", notes_1000);
    if (notes_500 > 0) printf("500 Notes: %d\n", notes_500);
    if (notes_200 > 0) printf("200 Notes: %d\n", notes_200);
    if (notes_100 > 0) printf("100 Notes: %d\n", notes_100);
    if (notes_50 > 0) printf("50 Notes: %d\n", notes_50);
    if (notes_20 > 0) printf("20 Notes: %d\n", notes_20);
    if (notes_10 > 0) printf("10 Notes: %d\n", notes_10);
    if (notes_5 > 0) printf("5 Notes: %d\n", notes_5);
    if (notes_2 > 0) printf("2 Notes: %d\n", notes_2);
    if (notes_1 > 0) printf("1 Notes: %d\n", notes_1);



}










// using Loop


// #include <stdio.h>

// int main() {
//     int amount;
//     // Denominations of notes
//     int denominations[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
//     int numDenominations = sizeof(denominations) / sizeof(denominations[0]);
    
//     // Array to store the count of notes for each denomination
//     int notes[numDenominations];
    
//     // Initialize all note counters to 0
//     for (int i = 0; i < numDenominations; i++) {
//         notes[i] = 0;
//     }

//     // Prompt user to enter the amount
//     printf("Enter the amount: ");
//     scanf("%d", &amount);

//     // Loop over each denomination and calculate the number of notes
//     for (int i = 0; i < numDenominations; i++) {
//         if (amount >= denominations[i]) {
//             notes[i] = amount / denominations[i];  // Calculate number of notes
//             amount = amount % denominations[i];    // Update the remaining amount
//         }
//     }

//     // Output the number of notes for each denomination
//     printf("Total number of notes:\n");
//     for (int i = 0; i < numDenominations; i++) {
//         if (notes[i] > 0) {
//             printf("%d Notes: %d\n", denominations[i], notes[i]);
//         }
//     }

//     return 0;
// }
