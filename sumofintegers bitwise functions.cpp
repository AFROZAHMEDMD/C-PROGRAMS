#include <stdio.h>

// Function declarations
int bitwise_add(int a, int b);
int bitwise_multiply(int a, int b);
int bitwise_divide_by_2(int n);
int sum_n_natural_numbers(int n);

int main() {
    int n, result;

    // Input
    printf("Enter a natural number: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a positive natural number.\n");
        return 1;
    }

    // Function call
    result = sum_n_natural_numbers(n);

    // Output
    printf("Sum of first %d natural numbers is: %d\n", n, result);

    return 0;
}

int bitwise_add(int a, int b) {
    while (b != 0) {
        int carry = a & b;
        a = a ^ b;
        b = carry << 1;
    }
    return a;
}

// Bitwise multiplication
int bitwise_multiply(int a, int b) {
    int result = 0;
    while (b != 0) {
        if (b & 1)
            result = bitwise_add(result, a);
        a <<= 1;
        b >>= 1;
    }
    return result;
}

// Bitwise divide by 2 (right shift)
int bitwise_divide_by_2(int n) {
    return n >> 1;
}

// Computes sum of first n natural numbers using bitwise logic
int sum_n_natural_numbers(int n) {
    int n_plus_1 = bitwise_add(n, 1);
    int product = bitwise_multiply(n, n_plus_1);
    return bitwise_divide_by_2(product);
}

