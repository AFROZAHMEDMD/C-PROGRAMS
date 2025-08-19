#include <stdio.h>

int main() {
    int a, b, choice;

    // Input two numbers once
    printf("Enter two numbers (a, b): ");
    scanf("%d %d", &a, &b);
    printf("You entered: a = %d, b = %d\n", a, b);

    // Run menu using do-while loop
    do {
        // Display menu
        printf("\nChoose an operation:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulo\n");
        printf("Any other number to exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Result: %d + %d = %d\n", a, b, a + b);
                break;
            case 2:
                printf("Result: %d - %d = %d\n", a, b, a - b);
                break;
            case 3:
                printf("Result: %d * %d = %d\n", a, b, a * b);
                break;
            case 4:
                if (b != 0)
                    printf("Result: %d / %d = %d\n", a, b, a / b);
                else
                    printf("Error: Division by zero\n");
                break;
            case 5:
                if (b != 0)
                    printf("Result: %d %% %d = %d\n", a, b, a % b);
                else
                    printf("Error: Modulo by zero\n");
                break;
            default:
                printf("Exiting program.\n");
        }

    } while (choice >= 1 && choice <= 5); // Repeat only for valid choices

    return 0;
}

