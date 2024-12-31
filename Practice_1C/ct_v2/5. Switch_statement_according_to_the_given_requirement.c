// Write a switch statement that will examine the value of an integer variable called test and print one of the following messages, depending on the value assigned to test:

// "Green", if test has a value of 1.
// "Red", if test has a value of 2.
// "Blue", if test has a value of 3.
// "White", if test has any other value

#include <stdio.h>

int main()
{
    int test;

    printf("Enter a value for test: ");
    scanf("%d", &test);

    switch (test)
    {
    case 1:
        printf("Green");
        break;

    case 2:
        printf("Red");
        break;
    case 3:
        printf("Blue");
        break;
    default:
        printf("White");
        break;
    }
}