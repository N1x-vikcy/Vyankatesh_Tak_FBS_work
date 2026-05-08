#include <stdio.h>
#include<math.h>
int main()
{
    int no, temp,rem,n=0;
    float sum=0;
    printf("enter any no: ");
    scanf("%d",&no);
    temp=no;
    int countTemp=no;
    while(countTemp!=0)
    {
        countTemp/=10;
        n++;
        
    }
    while(temp!=0){
        rem = temp%10;
        sum = sum + pow(rem , n);
        temp/=10;
    }
    if((int)sum==no){
        printf("%d is an armstrong no.\n",no);
    
    }else{
        printf("%d is not an armstrong no.\n",no);
    }
    return 0;
}