#include <stdio.h>

int fact(int n){ int f=1; for(int i=1;i<=n;i++) f*=i; return f; }

void f(int *n)
{
    for(int i=1;i<=*n;i++){
        int t=i,sum=0,r;
        while(t){ r=t%10; sum+=fact(r); t/=10; }
        if(sum==i) printf("%d ",i);
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    f(&n);
    return 0;
}