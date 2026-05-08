#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str1[50] = "Hello";
    char str2[50] = "World";
    char str3[50];
    char str4[] = "apple,orange,banana";
    char str5[] = "  Space  ";
    char target = 'l';
    
    printf("1. strlen: %zu\n", strlen(str1));

    strcpy(str3, str1);
    printf("2. strcpy: %s\n", str3);

    strncpy(str3, "Programming", 4);
    str3[4] = '\0';
    printf("3. strncpy: %s\n", str3);

    strcat(str1, " ");
    strcat(str1, str2);
    printf("4. strcat: %s\n", str1);

    strncat(str1, "!!!", 2);
    printf("5. strncat: %s\n", str1);

    printf("6. strcmp: %d\n", strcmp("abc", "abc"));

    printf("7. strncmp: %d\n", strncmp("apple", "apply", 4));

    printf("8. strchr: %s\n", strchr(str1, target));

    printf("9. strrchr: %s\n", strrchr(str1, target));

    printf("10. strstr: %s\n", strstr(str1, "World"));

    char *token = strtok(str4, ",");
    printf("11. strtok: %s\n", token);

    printf("12. strcspn: %zu\n", strcspn("123abc456", "abc"));

    printf("13. strspn: %zu\n", strspn("12345abc", "1234567890"));

    printf("14. strpbrk: %s\n", strpbrk("google", "aeiou"));

    memset(str3, '*', 5);
    str3[5] = '\0';
    printf("15. memset: %s\n", str3);

    memmove(str3, str1, 5);
    printf("16. memmove: %s\n", str3);

    printf("17. toupper: %c\n", toupper('a'));

    printf("18. tolower: %c\n", tolower('Z'));

    printf("19. isalpha: %d\n", isalpha('A'));

    printf("20. isdigit: %d\n", isdigit('5'));

    printf("21. isspace: %d\n", isspace(' '));

    return 0;
}