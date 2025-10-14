//to perform swapping of two numbers using pointers

#include<stdio.h>

int swap(int *x, int *y);

void main() {
    int a = 10;
    int b = 20;
    printf("value of A = %d\nvalue of B = %d", a ,b);

    swap(&a, &b);
    printf("value of A = %d\nvalue of B = %d", a ,b);
}

int swap(int *x, int *y) {
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}
