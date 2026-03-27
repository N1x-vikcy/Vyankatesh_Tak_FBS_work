#include <stdio.h>

int main() {
    int min;
    scanf("%d", &min);
    
    int hour = min/60;
    int minutes = min%60;
    printf("hour: %d, minutes = %d\n", hour , minutes);
    
    

    return 0;
}