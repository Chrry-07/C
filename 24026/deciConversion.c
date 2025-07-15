//write a c program to read an integer number and print the octal and hexadecimal value of given number

#include <stdio.h>

int main() {
int a;
printf("enter a value: ");
scanf("%d", &a);

printf("\nthe octal value of the given number is %o", a);
printf("\nthe hexadecimal value of the given number is %x", a);

return 0;
}
