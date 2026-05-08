#include <stdio.h>

int main() {
    int price, discount = 0;
    char c;
    
    printf("Enter your price: ");
    scanf("%d", &price);
    
    printf("Are you a student (y/n): ");
    scanf(" %c", &c); 
    
    if (c == 'y') {
       
        if (price > 500) {
            discount = price * 20 / 100;
        } else {
            discount = price * 10 / 100;
        }
    } 
    else if (c == 'n') {
        
        if (price > 600) {
            discount = price * 15 / 100;
        } else {
            discount = 0; 
        }
    }

    price = price - discount;
    printf("Discounted price: %d\n", price);
    
    return 0;
}