#include <stdio.h>

int main() {
    int a, b, c;
    int s;
    int area;

    printf("Enter length of sides a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    s = (a + b + c)/2;
    area = sqrt(s *(s - a) * (s - b) * (s - c));

    printf("Area of triangle using heron's formula is: %.2d\n", area);
}
