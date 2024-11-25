#include <stdio.h>

int main() {
    int r, c;

    for (c = 2; c <= 10; c++) {
        for (r = 1; r <= 10; r++) {
            printf("%d X %d = %d\n", c, r, c * r); 
        }
        printf("\n"); 
    }

    return 0;
}
