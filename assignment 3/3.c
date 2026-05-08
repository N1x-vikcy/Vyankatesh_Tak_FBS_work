
#include <stdio.h>

int main() {
    int s,e,sum=0;
    printf("enter start and end:");
    scanf("%d" , &s);
    scanf("%d",&e);
    
    while(s<=e)
    {
        sum=sum+s;
        s++;
        
    }
    printf("%d",sum);

    return 0;
}