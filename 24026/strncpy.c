// implement using strncpy

#include <stdio.h>
#include <string.h>

int main() {
    char str1[10], str2[10];

    printf("Enter string: ");
    gets(str2);

    strncpy(str1, str2, 4);

    printf("The given string is: ");
    puts(str1);

    return 0;
}
