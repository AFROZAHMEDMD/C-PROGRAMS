//wit return type and with argument
#include <stdio.h>
float average_of_numbers(int n);
int main() {
    int n;
    float avg;
    printf("Enter how many positive numbers: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive count.\n");
        return 1;
    }
    avg = average_of_numbers(n);

    printf("Average of the numbers is: %.2f\n", avg);

    return 0;
}

float average_of_numbers(int n) {
    int i, num, sum = 0;

    for (i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if (num <= 0) {
            printf("Only positive numbers are allowed. Try again.\n");
            i--; 
            
            continue;
        }

        sum += num;
    }

    return (float)sum / n;
}

