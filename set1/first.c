#include <stdio.h>

int main() {

    int n1,n2, i, j;
    int sum=0 ; 
    int flag;


    printf("Enter start ");
    scanf("%d", &n1);
    printf("enter end");
    scanf("%d", &n2);

    printf("prime no. from %d to %d are: ",n1,n2);

    for(i = n1; i <= n2; i++) {

       flag=1;

        for(j = 2; j < i; j++) {

            if(i % j == 0) {
                flag = 0;
                break;
            }
        }

        if(flag == 1) {
            
            printf("%d ",i);
            printf("\n");
            sum=sum+i;
            
        }
       

    }
    printf("Sum of this prime no are %d",sum);


    return 0;
}