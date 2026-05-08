#include <stdio.h>

void f(int *n)
{
    for(int i=1;i<=*n;i++){
        int t=i,sum=0,r;
        while(t){ r=t%10; sum+=r*r*r; t/=10; }
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