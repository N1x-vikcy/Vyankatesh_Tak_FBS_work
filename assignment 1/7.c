#include <stdio.h>
int main(){
    int bs, salary;
    double da, ta, hra;
    
    printf("enter your basic salary:");
    scanf("%d" , &bs);
    if(bs<=5000)
    {
        da= bs*10/100;
        ta= bs*20/100;
        hra= bs*25/100;
        
        salary = bs+da+ta+hra;
        printf("%d", salary);
    }
    else{
        da= bs*15/100;
        ta= bs*25/100;
        hra= bs*30/100;
        
        salary = bs+da+ta+hra;
        printf("%d", salary);
    }
    
    return 0;

}
