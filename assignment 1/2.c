#include <stdio.h>
int main(){
    int num , real , reverse=0, remainder=0;
    printf("enter three digit no.: ");
    scanf("%d", &num);
    real=num;

    while(num!=0){
        remainder= num%10;
        reverse= reverse *10 + remainder;
        num= num/10;

    }
    if(real == reverse){
        printf("%d is palindrome." , real);

    }
    else{
        printf("%d is not palindrome." , real)
    }
    return 0;

}
