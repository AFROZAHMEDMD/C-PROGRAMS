#include <stdio.h>
#define SIZE 1  // Only one number

int main() {
    int n[SIZE], i;
    printf("Enter a number: ");
    scanf("%d", &n[0]);
    printf("\nMultiplication table of %d:\n", n[0]);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n[0], i, n[0] * i);
    }

    return 0;
}

