#include <stdio.h>
#include <ctype.h>

// Function declarations
void palindrome(int n);
void leapyear(int year);
void display();
int factorial(int n);
int greatest(int a, int b);
void evenFunc(int num);

int main() {
    int choice;

    do {
        printf("\n=== MENU ===\n");
        printf("1. Print numbers from 1 to N\n");
        printf("2. Check vowel or consonant\n");
        printf("3. Multiplication table (for & while loop)\n");
        printf("4. Even or Odd\n");
        printf("5. Positive or Negative\n");
        printf("6. Arithmetic operations (Add/Sub)\n");
        printf("7. Swap two numbers (with/without temp)\n");
        printf("8. Sum of digits\n");
        printf("9. Digital Root (Repeated digit sum)\n");
        printf("10. Cumulative sum with steps\n");
        printf("11. Data type sizes\n");
        printf("12. Nested printf behavior\n");
        printf("13. Input and display a double value\n");
        printf("14. Nested for-loop example\n");
        printf("15. Corrected nested while-loop example\n");
        printf("16. Prime check\n");
        printf("17. Palindrome check (with function)\n");
        printf("18. Decimal to Octal and Hex display\n");
        printf("19. Positive or Negative using if-else\n");
        printf("20. Print numbers from A to B (loop)\n");
        printf("21. Print numbers from N to 1 (reverse loop)\n");
        printf("22. Leap year check (if-else)\n");
        printf("23. Leap year check for two years\n");
        printf("24. Leap year check (with function)\n");
        printf("25. Post/pre increment-decrement demo (line by line)\n");
        printf("26. Post/pre increment-decrement demo (single line)\n");
        printf("27. Display 'Hello World' (void/void function)\n");
        printf("28. Find greatest of two numbers (with return value)\n");
        printf("29. Grade based on marks\n");
        printf("30. Factorial of a number\n");
        printf("31. Even/Odd check (bitwise)\n");
        printf("32. Print even numbers in range (a to b) using while\n");
        printf("33. Print even numbers from 0 to n using for\n");
        printf("34. Print even numbers down from n to 0\n");
        printf("35. Check even via function\n");
        printf("36. Digital root using formula 1\n");
        printf("37. Digital root using formula 2\n");
        printf("38. Continue demo\n");
        printf("39. Break demo\n");
        printf("40. Bitwise operations demo\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        int i, j, n, x, a, b, r, sum = 0, temp, count, year1, year2;
        char ch;
        double d;
        float z = 3.45;

        switch (choice) {
            case 1:
                printf("Enter N: ");
                scanf("%d", &n);
                for (i = 1; i <= n; i++)
                    printf("%d\n", i);
                break;

            case 2:
                printf("Enter a character: ");
                scanf(" %c", &ch);
                ch = tolower(ch);
                if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                    printf("%c is a vowel\n", ch);
                else
                    printf("%c is a consonant\n", ch);
                break;

            case 3:
                printf("Enter number and limit (n x): ");
                scanf("%d %d", &n, &x);
                printf("Using for loop:\n");
                for (i = 1; i <= x; i++)
                    printf("%d * %d = %d\n", n, i, n * i);
                printf("Using while loop:\n");
                i = 1;
                while (i <= x) {
                    printf("%d * %d = %d\n", n, i, n * i);
                    i++;
                }
                break;

            case 4:
                printf("Enter a number: ");
                scanf("%d", &n);
                printf("%s\n", (n % 2 == 0) ? "Even" : "Odd");
                break;

            case 5:
                printf("Enter a number: ");
                scanf("%d", &n);
                printf("%s\n", (n >= 0) ? "Positive" : "Negative");
                break;

            case 6:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                printf("1. Add\n2. Subtract\nEnter your choice: ");
                scanf("%d", &n);
                if (n == 1)
                    printf("Sum = %d\n", a + b);
                else if (n == 2)
                    printf("Difference = %d\n", a - b);
                else
                    printf("Invalid operation\n");
                break;

            case 7:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                printf("Before swap: a = %d, b = %d\n", a, b);
                printf("1. Swap with temp\n2. Swap without temp\nEnter choice: ");
                scanf("%d", &n);
                if (n == 1) {
                    temp = a; a = b; b = temp;
                } else if (n == 2) {
                    a = a + b; b = a - b; a = a - b;
                } else {
                    printf("Invalid swap method\n");
                    break;
                }
                printf("After swap: a = %d, b = %d\n", a, b);
                break;

            case 8:
                printf("Enter a number: ");
                scanf("%d", &n);
                sum = 0;
                while (n > 0) {
                    r = n % 10;
                    sum += r;
                    n /= 10;
                }
                printf("Sum of digits = %d\n", sum);
                break;

            case 9:
                printf("Enter a number: ");
                scanf("%d", &n);
                sum = 0;
                while (n > 0 || sum > 9) {
                    if (n == 0) {
                        n = sum;
                        sum = 0;
                    }
                    r = n % 10;
                    sum += r;
                    n /= 10;
                }
                printf("Digital root = %d\n", sum);
                break;

            case 10:
                printf("Enter n: ");
                scanf("%d", &n);
                sum = 0;
                for (i = 1; i <= n; i++) {
                    sum += i;
                    printf("%d ", sum);
                }
                printf("\nTotal = %d\n", sum);
                break;

            case 11:
                printf("int: %zu\nchar: %zu\ndouble: %zu\nfloat: %zu\nunsigned int: %zu\nunsigned char: %zu\nshort int: %zu\n",
                       sizeof(int), sizeof(char), sizeof(double), sizeof(float),
                       sizeof(unsigned int), sizeof(unsigned char), sizeof(short int));
                break;

            case 12:
                printf("Nested printf output: ");
                printf("%d", printf("%d %d %f", 5, 10, z));
                printf("\n");
                break;

            case 13:
                printf("Enter a double: ");
                scanf("%lf", &d);
                printf("You entered: %lf\n", d);
                break;

            case 14:
                for (i = 0; i < 5; i++)
                    for (j = 0; j < 5; j++)
                        printf("j = %d\n", j);
                break;

            case 15:
                for (i = 0; i < 5; i++) {
                    for (j = 0; j < 5; j++)
                        printf("j = %d\n", j);
                    printf("i = %d\n", i);
                }
                break;

            case 16:
                printf("Enter a number: ");
                scanf("%d", &n);
                count = 0;
                for (i = 1; i <= n; i++) {
                    if (n % i == 0) count++;
                }
                printf("%s\n", (count == 2) ? "Prime" : "Not prime");
                break;

            case 17:
                printf("Enter a number: ");
                scanf("%d", &n);
                palindrome(n);
                break;

            case 18:
                printf("Enter decimal number: ");
                scanf("%d", &n);
                printf("Octal = %o, Hex = %X\n", n, n);
                break;

            case 19:
                printf("Enter a number: ");
                scanf("%d", &a);
                if (a < 0)
                    printf("Negative number\n");
                else
                    printf("Positive number\n");
                break;

            case 20:
                printf("Enter two numbers (a to b): ");
                scanf("%d %d", &a, &b);
                for (i = a; i <= b; i++)
                    printf("%d\n", i);
                break;

            case 21:
                printf("Enter number: ");
                scanf("%d", &n);
                for (i = n; i >= 1; i--)
                    printf("%d\n", i);
                break;

            case 22:
                printf("Enter year: ");
                scanf("%d", &year1);
                if ((year1 % 400 == 0) || (year1 % 4 == 0 && year1 % 100 != 0))
                    printf("%d is a leap year\n", year1);
                else
                    printf("%d is not a leap year\n", year1);
                break;

            case 23:
                printf("Enter two years: ");
                scanf("%d %d", &year1, &year2);
                printf("Year %d is %sa leap year\n", year1, ((year1 % 400 == 0) || (year1 % 4 == 0 && year1 % 100 != 0)) ? "" : "not ");
                printf("Year %d is %sa leap year\n", year2, ((year2 % 400 == 0) || (year2 % 4 == 0 && year2 % 100 != 0)) ? "" : "not ");
                break;

            case 24:
                printf("Enter year: ");
                scanf("%d", &year1);
                leapyear(year1);
                break;

            case 25:
                {
                    int x = 5, y = 3;
                    printf("Initial: x = %d, y = %d\n", x, y);
                    printf("x++ = %d\n", x++);
                    printf("++y = %d\n", ++y);
                    printf("x-- = %d\n", x--);
                    printf("--y = %d\n", --y);
                    printf("Final: x = %d, y = %d\n", x, y);
                }
                break;

            case 26:
                {
                    int x = 5, y = 3;
                    int res = x++ + ++y - y-- + --x;
                    printf("Result = %d\n", res);
                }
                break;

            case 27:
                display();
                break;

            case 28:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                printf("Greatest is %d\n", greatest(a, b));
                break;

            case 29:
                {
                    int marks;
                    printf("Enter marks: ");
                    scanf("%d", &marks);
                    if (marks >= 90)
                        printf("Grade A\n");
                    else if (marks >= 80)
                        printf("Grade B\n");
                    else if (marks >= 70)
                        printf("Grade C\n");
                    else if (marks >= 60)
                        printf("Grade D\n");
                    else
                        printf("Grade F\n");
                }
                break;

            case 30:
                printf("Enter a number: ");
                scanf("%d", &n);
                printf("Factorial = %d\n", factorial(n));
                break;

            case 31:
                printf("Enter a number: ");
                scanf("%d", &n);
                printf("%d is %s\n", n, (n & 1) ? "Odd" : "Even");
                break;

            case 32:
                printf("Enter two numbers (a to b): ");
                scanf("%d %d", &a, &b);
                i = a;
                while (i <= b) {
                    if (i % 2 == 0)
                        printf("%d ", i);
                    i++;
                }
                printf("\n");
                break;

            case 33:
                printf("Enter n: ");
                scanf("%d", &n);
                for (i = 0; i <= n; i += 2)
                    printf("%d ", i);
                printf("\n");
                break;

            case 34:
                printf("Enter n: ");
                scanf("%d", &n);
                for (i = n; i >= 0; i--) {
                    if (i % 2 == 0)
                        printf("%d ", i);
                }
                printf("\n");
                break;

            case 35:
                printf("Enter a number: ");
                scanf("%d", &n);
                evenFunc(n);
                break;

            case 36:
                printf("Enter a number: ");
                scanf("%d", &n);
                // Using digital root formula: 1 + (n - 1) % 9
                if (n == 0)
                    printf("Digital root = 0\n");
                else
                    printf("Digital root = %d\n", 1 + (n - 1) % 9);
                break;

            case 37:
                printf("Enter a number: ");
                scanf("%d", &n);
                sum = n;
                while (sum > 9) {
                    int temp_sum = 0;
                    while (sum > 0) {
                        temp_sum += sum % 10;
                        sum /= 10;
                    }
                    sum = temp_sum;
                }
                printf("Digital root = %d\n", sum);
                break;

            case 38:
                printf("Demonstrating continue:\n");
                for (i = 1; i <= 10; i++) {
                    if (i % 2 == 0)
                        continue; // skip even numbers
                    printf("%d ", i);
                }
                printf("\n");
                break;

            case 39:
                printf("Demonstrating break:\n");
                for (i = 1; i <= 10; i++) {
                    if (i == 5)
                        break;
                    printf("%d ", i);
                }
                printf("\n");
                break;

            case 40:
                printf("Bitwise Operations Demo:\n");
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                printf("a & b = %d\n", a & b);
                printf("a | b = %d\n", a | b);
                printf("a ^ b = %d\n", a ^ b);
                printf("~a = %d\n", ~a);
                printf("a << 1 = %d\n", a << 1);
                printf("b >> 1 = %d\n", b >> 1);
                break;

            case 0:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 0);

    return 0;
}

// Functions:

void palindrome(int n) {
    int original = n, reversed = 0, digit;
    while (n > 0) {
        digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    if (original == reversed)
        printf("%d is a palindrome\n", original);
    else
        printf("%d is not a palindrome\n", original);
}

void leapyear(int year) {
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        printf("%d is a leap year\n", year);
    else
        printf("%d is not a leap year\n", year);
}

void display() {
    printf("Hello World\n");
}

int factorial(int n) {
    if (n < 0) return -1; // invalid
    int fact = 1, i;
    for (i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int greatest(int a, int b) {
    return (a > b) ? a : b;
}

void evenFunc(int num) {
    if ((num & 1) == 0)
        printf("%d is Even\n", num);
    else
        printf("%d is Odd\n", num);
}

