#include <stdio.h>

int main() {
    int length , width;
    scanf("%d", &length);
    scanf("%d", &width);
    
    int peri = 2*(length+width);
    
    printf("Perimeter: %d",peri);
    return 0;
}