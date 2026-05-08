#include <stdio.h>

int main() {
    int choice, num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\n1. Even or Odd\n2. Prime or Not\n3. Palindrome or Not\n4. Positive, Negative or Zero\n5. Reverse Number\n6. Sum of Digits\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            if (num % 2 == 0) printf("Even");
            else printf("Odd");
            break;
        case 2: {
            int isPrime = 1;
            if (num < 2) isPrime = 0;
            for (int i = 2; i <= num / 2; i++) {
                if (num % i == 0) {
                    isPrime = 0;
                    break;
                }
            }
            if (isPrime) printf("Prime");
            else printf("Not Prime");
            break;
        }
        case 3: {
            int temp = num, rev = 0;
            while (temp > 0) {
                rev = rev * 10 + (temp % 10);
                temp /= 10;
            }
            if (rev == num) printf("Palindrome");
            else printf("Not Palindrome");
            break;
        }
        case 4:
            if (num > 0) printf("Positive");
            else if (num < 0) printf("Negative");
            else printf("Zero");
            break;
        case 5: {
            int temp = num, rev = 0;
            while (temp != 0) {
                rev = rev * 10 + (temp % 10);
                temp /= 10;
            }
            printf("Reverse: %d", rev);
            break;
        }
        case 6: {
            int temp = num, sum = 0;
            if (temp < 0) temp = -temp;
            while (temp > 0) {
                sum += temp % 10;
                temp /= 10;
            }
            printf("Sum of digits: %d", sum);
            break;
        }
        default:
            printf("Invalid choice");
    }
    return 0;
}