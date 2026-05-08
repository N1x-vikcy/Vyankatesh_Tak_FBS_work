#include <stdio.h>

void f(int *a,int n,int *b,int m)
{
    for(int i=0;i<n;i++) printf("%d ",*(a+i));
    for(int i=0;i<m;i++) printf("%d ",*(b+i));
}

int main()
{
    int n,m;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&m);
    int b[m];
    for(int i=0;i<m;i++) scanf("%d",&b[i]);
    f(a,n,b,m);
    return 0;
}