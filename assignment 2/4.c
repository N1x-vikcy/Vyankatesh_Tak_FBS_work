#include <stdio.h>

int main() {
    int marks;
    printf("enter your marks: ");
    scanf("%d",&marks);
   if(marks>=75){
       printf("distinction");
   }
   else if(marks<75 && marks>65){
       printf("First Class");
   }
   else if(marks<65 && marks>55){
       printf("Second Class");
   }
   else if(marks<55 && marks>40){
       printf("Pass Class");
   }
   else if(marks<40){
       printf("Fail");
   }
    return 0;
}