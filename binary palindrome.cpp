#include <stdio.h>
#include <stdbool.h>

bool isBinaryPalindrome(unsigned int n) {
    // Find the position of the most significant bit
    int left = 31;
    while (left > 0 && ((n >> left) & 1) == 0)
        left--;

    int right = 0;

    while (left > right) {
        int leftBit = (n >> left) & 1;
        int rightBit = (n >> right) & 1;
        if (leftBit != rightBit)
            return false;
        left--;
        right++;
    }

    return true;
}

int main() {
    unsigned int num = 21;  // binary: 10101
    if (isBinaryPalindrome(num))
        printf("%u is a binary palindrome.\n", num);
    else
        printf("%u is NOT a binary palindrome.\n", num);
    return 0;
}

