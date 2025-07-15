// write a c program to read decimal point number and print that particular value using with concept

#include <stdio.h>

int main() {
float f;
printf("enter f value: ");
scanf("%f",&f);
printf("\n the f values is %0.4f", f);
printf("\n the f values is %2.4f", f);
printf("\n the f values is %e", f); //converts to exponential value
printf("\n the f values is %E", f); //converts to exponential value

return 0;
}
