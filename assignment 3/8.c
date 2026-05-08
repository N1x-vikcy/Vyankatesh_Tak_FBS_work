#include <stdio.h>
int main()
{
    int no;
    printf("enter any no: ");
    scanf("%d",&no);
    int temp=no;
    int rem,sum=0;
    while(no>0)
    {
        rem=no%10;
        int fact=1;
        while(rem>0){
            fact=fact*rem;
            rem--;
        }
        sum=sum+fact;
        no=no/10;
    }
    printf("%d  ",sum);
    if (temp==sum){
        printf("Strong no");
    }
    else{
        printf("not strong");
    }

    return 0;
}