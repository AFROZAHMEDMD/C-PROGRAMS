#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    int digital_root = 1 + (n - 1) % 9;

    printf("Digital root: %d\n", digital_root);

    return 0;
}

