#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    
    int square = a*a;
    int cube = a*a*a;
    
    printf("square = %d\n", square);
    printf("cube = %d\n", cube);

    return 0;
}