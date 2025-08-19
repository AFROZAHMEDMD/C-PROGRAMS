#include <stdio.h>

int main() {
    int num, digits[100], i = 0, j, isPalindrome = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    int original = num;
    while (num > 0) {
        digits[i] = num % 10;  // Store last digit
        num = num / 10;        // Remove last digit
        i++;
    }
    for (j = 0; j < i / 2; j++) {
        if (digits[j] != digits[i - j - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    // Step 3: Output result using if
    if (isPalindrome)
        printf("%d is a palindrome.\n", original);
    else
        printf("%d is not a palindrome.\n", original);

    return 0;
}
/*#include <stdio.h>

// Function to reverse a number using recursion
int reverse(int num, int rev) {
    if (num == 0)
        return rev;
    return reverse(num / 10, rev * 10 + num % 10);
}

int main() {
    int num, reversed;

    printf("Enter a number: ");
    scanf("%d", &num);

    reversed = reverse(num, 0);  // Start reversing

    if (num == reversed)
        printf("%d is a palindrome.\n", num);
    else
        printf("%d is not a palindrome.\n", num);

    return 0;
}*/

