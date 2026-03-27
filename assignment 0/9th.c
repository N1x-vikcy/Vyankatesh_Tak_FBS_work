#include <stdio.h>

int main() {
    int height , base;
    scanf("%d", &height);
    scanf("%d", &base);
    
    float area = 0.5*(height*base);
    
    printf("Area of tringle= %f",area);
    return 0;
}