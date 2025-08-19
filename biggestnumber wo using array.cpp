#include <stdio.h>

int main() {
    int n, max, num;

    printf("How many numbers: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive number.\n");
        return 1;
    }

    printf("Enter number 1: ");
    scanf("%d", &num);
    max = num; // initialize max with the first number

    for (int i = 1; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num);

        if (num > max) {
            max = num;
        }
    }

    printf("Biggest number: %d\n", max);
    return 0;
}

