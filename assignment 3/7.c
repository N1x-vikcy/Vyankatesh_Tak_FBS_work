#include <stdio.h>
#include<math.h>
int main()
{
    int no, fact=1;
    printf("enter any no.:");
    scanf("%d",&no);
    for(int i=1; i<=no;i++){
        
        if (i>0){
            fact=fact*i;
        }
    }
    printf("%d",fact);

    return 0;
}