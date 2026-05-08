#include <stdio.h>

int main() {
    int a, b;
    char op;

    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);

    printf("Enter the operation + - * /: ");
    
    scanf(" %c", &op); 

    printf("\n--- Results ---\n");
    
    printf("Numbers: %d and %d\n", a, b);
    printf("Operation: %c\n", op);

    if (op == '+') {
        int c = a + b;
        printf("%d", c);
    }
    else if (op == '-') {
        int c = a - b;
        printf("%d", c);
    }
    else if (op == '*') {
        int c = a * b;
        printf("%d", c);
    }
    else if (op == '/') {
        int c = a/b;
        printf("%d",c);
    }
    else {
        printf("wrong input");
    }

    return 0;
}