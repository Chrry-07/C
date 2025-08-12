#include<stdio.h>

main() {
    char a;
    printf("Enter a character: ");
    scanf("%c", &a);

    if(a >= 'A' && a <= 'Z') {
        a += 32;
        printf("The converted character is %c", a);
    } else if (a >= 'a' && a <= 'z'){
        a -= 32;
        printf("The converted Character is %c", a);
    } else {
        printf("Invalid input");
    }
    return 0;
}
