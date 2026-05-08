#include <stdio.h>

int main() {
    int a, b;
    int choice;

    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);

    printf("1. Press 1 for addition\n2. Press 2 for subtraction\n3. Press 3 for multiplication\n4. Press 4 for division\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("\n--- Results ---\n");
    printf("Numbers: %d and %d\n", a, b);

    switch (choice)
    {
        case 1:
            printf("Addition of %d and %d is %d", a, b, a + b);
            break;

        case 2:
            printf("Subtraction of %d and %d is %d", a, b, a - b);
            break;

        case 3:
            printf("Multiplication of %d and %d is %d", a, b, a * b);
            break;

        case 4:
            if (b != 0)
                printf("Division of %d and %d is %.2f", a, b, (float)a / b);
            else
                printf("Division by zero is not allowed");
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}