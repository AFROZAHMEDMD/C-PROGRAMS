 //arthrmetic calculation using with return type and with arguments
 
 
 #include <stdio.h>

// Function declaration
int arithmetic(int a, int b, int choice);

int main() {
    int a, b, choice, result;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Enter your choice: ");
    scanf("%d", &choice);


    printf("Result: %d\n", arithmetic(a, b, choice));
}

int arithmetic(int a, int b, int choice) {
    switch (choice) {
        case 1:
            return a + b;
        case 2:
            return a - b;
        case 3:
            return a * b;
        case 4:
            if (b != 0)
                return a / b;
            else {
                printf("Error: Division by zero\n");
            }
        default:
            printf("Invalid choice\n");
            
    }
    return arithmetic(a, b, choice);
}

