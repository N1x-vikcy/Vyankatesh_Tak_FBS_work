#include <stdio.h>

int main() {
    int n,flag=0;
    printf("enter any no:");
    scanf("%d",&n);
    if(n<=1){
        flag=1;
    }
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0){
            flag=1;
            break;
        }
        else{
            flag=0;
        }
    }
    if(flag==0){
        printf("%d is a prime no.",n);
    }
    else{
        printf("%d is not a prime no.",n);
    }
    

    return 0;
}