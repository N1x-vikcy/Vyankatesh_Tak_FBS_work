#include <stdio.h>

int main() {
    int ab, bc , ca;
    printf("enter the sides of the triangle: ");
    scanf("%d %d %d",&ab, &bc,&ca);
    if (ab == bc && bc == ca)
    {
        printf("Triangle abc is Equilateral triangle");
    }
    else if(ab == bc || bc == ca || ab == ca )
    {
        printf("Triangle abc is isoscales triangle");
    }
    else{
        printf("Triangle abc is scalen triangle");
    }
    return 0;
}