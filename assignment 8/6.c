#include <stdio.h>

void f(int *a,int n)
{
    for(int i=0;i<n;i++){
        int num=*(a+i),flag=1;
        if(num<2) flag=0;
        for(int j=2;j<=num/2;j++) if(num%j==0) flag=0;
        if(flag) printf("%d ",num);
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