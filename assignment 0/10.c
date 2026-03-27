#include <stdio.h>

int main() {
    int a, b, c, d, e;

    
    printf("Enter marks of  five subjects ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    
    int sum = a + b + c + d + e;
    float per = (sum / 500.0) * 100;
    
    printf("sum = %i\n", sum);
    printf("per = %f\n", per);

    return 0;
}