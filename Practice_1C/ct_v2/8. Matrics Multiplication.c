#include <stdio.h>

int main() {
    int i, j, k;
    int arr[3][3];
    int brr[3][3];
    int res[3][3];

    printf("Enter elements of 1st Matrix: \n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("1st (Matrix A): \n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%3d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("Enter elements of 2nd Matrix:  \n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &brr[i][j]);
        }
    }

    printf("2nd (Matrix B): \n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%3d ", brr[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            res[i][j] = 0;
            for(k = 0; k < 3; k++) {
                res[i][j] += arr[i][k] * brr[k][j];
            }
        }
    }

    printf("result(Matrix A * Matrix B): \n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%3d ", res[i][j]);
        }
        printf("\n");
    }

    return 0;
}

