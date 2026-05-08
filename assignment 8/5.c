#include <stdio.h>

void f(int *a,int n)
{
    for(int i=0;i<n;i+=2) printf("%d ",*(a+i));
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