#include <stdio.h>

int main() {
    int a, b, c, d, e;

    
    printf("Enter five numbers (separated by spaces): ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    
    int sum = a + b + c + d + e;
    float avg = sum/5;
    
    printf("avg = %f\n", avg);

    return 0;
}