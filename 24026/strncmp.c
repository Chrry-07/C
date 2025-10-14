//to check the given strings are same or not using strncmp function

#include <stdio.h>
#include <string.h>

int main() {
    char str1[10], str2[10], val;

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    val = strncmp(str1, str2, 3);

    if(val == 0)
        printf("Same");
    else if(val > 0)
        printf("first string is greater than second string");
    else
        printf("second string is greater than first string");

    return 0;
}
