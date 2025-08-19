//It represents the number of particles (atoms, molecules, etc.) in one mole of a substance.

#include <stdio.h>
#define MAX 10
#define AVOGADRO 6.02214076e23

// Recursion: factorial function (just for fun or chemistry formulas)
unsigned long long factorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    double moles[MAX];
    int count = 0;
    int choice;

    while (1) {
        printf("\n=== Avogadro's Number Program ===\n");
        printf("1. Input mole values\n");
        printf("2. Calculate particles for all\n");
        printf("3. Calculate factorial (recursion example)\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("How many mole values? (max %d): ", MAX);
            scanf("%d", &count);
            if (count > MAX) count = MAX;

            for (int i = 0; i < count; i++) {
                printf("Enter mole value #%d: ", i + 1);
                scanf("%lf", &moles[i]);
            }

        } else if (choice == 2) {
            if (count == 0) {
                printf("Please input mole values first.\n");
                continue;
            }

            for (int i = 0; i < count; i++) {
                double particles = moles[i] * AVOGADRO;
                printf("Moles: %.4f => Particles: %.4e\n", moles[i], particles);
            }

        } else if (choice == 3) {
            int num;
            printf("Enter a number for factorial: ");
            scanf("%d", &num);
            if (num < 0 || num > 20) {
                printf("Please enter a value between 0 and 20.\n");
            } else {
                printf("Factorial of %d is %llu\n", num, factorial(num));
            }

        } else if (choice == 4) {
            printf("Exiting program.\n");
            break;

        } else {
            printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
/*2 Print Avogadro’s Number (as a constant using double)

#include <stdio.h>

int main() {
    double avogadro = 6.02214076e23;

    printf("Avogadro's number is: %.5e\n", avogadro);

    return 0;
}*/

/* //3. Calculate Number of Particles in Given Moles

#include <stdio.h>

int main() {
    double avogadro = 6.02214076e23;
    double moles;

    printf("Enter the number of moles: ");
    scanf("%lf", &moles);

    double particles = moles * avogadro;

    printf("Number of particles: %.5e\n", particles);

    return 0;
}*/

