#include <stdio.h>

int main() {
    int n, a, i, count;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter choice (1 - Factorial, 2 - Prime Check): ");
    scanf("%d", &n);

    switch (n) {
        case 1: {
            int fact = 1;
            for (i = 1; i <= a; i++) {
                fact *= i;
            }
            printf("Factorial of %d is %d\n", a, fact);
            break;
        }

        case 2: {
            count = 0;
            i = 1;
            while (i <= a) {
                if (a % i == 0)
                    count++;
                i++;
            }

            if (count == 2)
                printf("%d is a prime number.\n", a);
            else
                printf("%d is not a prime number.\n", a);
            break;
        }
        

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}

