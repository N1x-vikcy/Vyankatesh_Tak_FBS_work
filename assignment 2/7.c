#include <stdio.h>

int main() {
    int age;
    printf("enter your age: ");
    scanf("%d",&age);
   if(age>60){
       printf("senior");
   }
   else if(age<60 && age>20){
       printf("Adult");
   }
   else if(age<20 && age>11){
       printf("Teenager");
   }
   else if(age<12){
       printf("Child");
   }
    return 0;
}