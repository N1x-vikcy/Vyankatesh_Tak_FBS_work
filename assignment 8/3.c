#include <stdio.h>

void f(int *a,int n)
{
    int sum=0;
    for(int i=0;i<n;i++) sum+=*(a+i);
    printf("%d",sum);
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