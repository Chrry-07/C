#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    int s, area;

    printf("Enter length of sides a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    // Semi-perimeter
    s = (a + b + c) / 2;

    // Heron's formula
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("Area of triangle using Heron's formula is: %d\n", area);

    return 0;
}
