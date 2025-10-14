//to implement double pointer or pointer to pointer

#include<stdio.h>

void main() {
    int var = 200;
    int *ptr = &var;
    int *pptr = &ptr;

    printf("value of var: %d\n", var);
    printf("value of *ptr: %d\n", *ptr);
    printf("value of *pptr: %d\n", *pptr);

    printf("address of *ptr: %d\n", *ptr);
    printf("address of *pptr: %d", *pptr);
}
