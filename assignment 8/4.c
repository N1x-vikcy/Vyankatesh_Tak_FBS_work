#include <stdio.h>

void f(int *a,int n)
{
    for(int i=0;i<n;i++){
        if(*(a+i)%2==0) printf("E ");
        else printf("O ");
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    f(a,n);
    return 0;
}