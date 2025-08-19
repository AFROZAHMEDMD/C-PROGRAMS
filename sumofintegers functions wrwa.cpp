// with return type and argument
#include <stdio.h>
int sumofnumbers(int n);

int main() {
    int n, result;
    printf("Enter a natural number: ");
    scanf("%d", &n);
    result = sumofnumbers(n);
    printf("Sum of first %d natural numbers is: %d\n", n, result);
}
int sumofnumbers(int n) {
    return (n * (n + 1)) / 2;
}

