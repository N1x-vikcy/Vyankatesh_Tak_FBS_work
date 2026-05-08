#include <stdio.h>
int main(){
    char c;
    printf("enter any character:");
    scanf("%c" , &c);
    if (c>='A'&& c<='Z'){
        printf("Uppercase");
    }
    else if (c>='a'&& c<='z'){
        printf("lowercase");
    }
    else{
        printf("Please Enter character bhai");
    }
    
    return 0;

}
