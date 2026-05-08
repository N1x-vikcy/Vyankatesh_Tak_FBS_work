
#include <stdio.h>

int main() {
    int n,t,i=1;
    printf("enter number:");
    scanf("%d" , &n);
    
    while(i<=10)
    {
        t=i*n;
        printf(" %d ",t);
        i++;
    }

    return 0;
}