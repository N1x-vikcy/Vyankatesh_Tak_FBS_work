#include <stdio.h>

int main() {
    int c=50;
    int d=83;
    int temp;
    
    temp=c;
    c=d;
    d=temp;
    
    printf("c=%d , d=%d",c , d);

    
}