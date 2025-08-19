#include <stdio.h>

// Function declaration (prototype)
int sum_from_a_to_b(int a, int b);

int main() {
    int a, b, result;

    // Input
    printf("Enter two integers (a and b): ");
    scanf("%d %d", &a, &b);

    // Function call
    result = sum_from_a_to_b(a, b);

    // Output
    printf("Sum of integers from %d to %d is: %d\n", a, b, result);

    return 0;
}

// Function definition
int sum_from_a_to_b(int a, int b) {
    if (a > b) {
        // Swap if a > b
        int temp = a;
        a = b;
        b = temp;
    }

    int n = b - a + 1;
    return n * (a + b) / 2;
}



#include <stdio.h>

// Function to calculate sum using formula
int sum_from_a_to_b(int a, int b) {
    if (a > b) {
        // Swap if a > b
        int temp = a;
        a = b;
        b = temp;
    }
    int n = b - a + 1;
    return n * (a + b) / 2;
}

int main() {
    int a, b;

    printf("Enter two integers (a and b): ");
    scanf("%d %d", &a, &b);

    int result = sum_from_a_to_b(a, b);

    printf("Sum of integers from %d to %d is: %d\n", a, b, result);

    return 0;
}

