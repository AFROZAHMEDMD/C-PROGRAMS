#include <stdio.h>
#define SIZE 5

int main() {
    int x, i, a[SIZE];

    printf("Enter %d numbers:\n", SIZE);
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &a[i]);
    }

    // Assume the first element is the greatest initially
    x = a[0];

    // Compare with the rest of the array
    for (i = 0; i < SIZE; i++) {
        if (x < a[i]) {
            x = a[i];
        }
    }

    // Output the greatest number
    printf("The greatest number is: %d\n", x);

    return 0;
}

