#include <stdio.h>

void f(int *n,int *ch)
{
    if(*ch==1){
        if(*n%2==0) printf("Even"); else printf("Odd");
    }
    else if(*ch==2){
        int flag=1;
        for(int i=2;i<=*n/2;i++) if(*n%i==0) flag=0;
        if(flag&&*n>1) printf("Prime"); else printf("Not");
    }
    else if(*ch==3){
        int r=0,t=*n;
        while(t){ r=r*10+t%10; t/=10; }
        if(r==*n) printf("Palindrome"); else printf("Not");
    }
    else if(*ch==4){
        if(*n>0) printf("Positive");
        else if(*n<0) printf("Negative");
        else printf("Zero");
    }
    else if(*ch==5){
        int r=0,t=*n;
        while(t){ r=r*10+t%10; t/=10; }
        printf("%d",r);
    }
    else if(*ch==6){
        int sum=0,t=*n;
        while(t){ sum+=t%10; t/=10; }
        printf("%d",sum);
    }
}

int main()
{
    int n,ch;
    scanf("%d%d",&n,&ch);
    f(&n,&ch);
    return 0;
}