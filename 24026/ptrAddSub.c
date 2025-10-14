//to perform addition and subtraction on a pointer

#include<stdio.h>
void main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;
    printf("%p %d\n",ptr, *ptr);

    ptr = ptr + 3;
    printf("%p %d\n",ptr, *ptr);

    ptr = ptr - 2;
    printf("%p %d\n",ptr, *ptr);
}
