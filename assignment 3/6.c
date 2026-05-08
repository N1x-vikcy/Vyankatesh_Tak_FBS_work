#include <stdio.h>
#include<math.h>
int main()
{
    int no, temp;
    float sum=0;
    printf("enter any no: ");
    scanf("%d",&no);
    temp=no;
    for(int i=1; i<no;++i){
        if (no%i==0){
            sum=sum+i;
        }
    }
    if(sum==temp){
        printf("%d is a perfect number.",no);
    }
    else{
        printf("%d is no a perfect number.",no);
    }
    return 0;
}