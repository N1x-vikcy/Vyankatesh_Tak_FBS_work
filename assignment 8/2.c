#include <stdio.h>

void f(int *a,int n,int key)
{
    int flag=0;
    for(int i=0;i<n;i++) if(*(a+i)==key) flag=1;
    if(flag) printf("Found"); else printf("Not Found");
}

int main()
{
    int n,key;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&key);
    f(a,n,key);
    return 0;
}