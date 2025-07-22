#include <stdio.h>

int main() {

    int n, max, sum;
    max = 200;
    n = max / 2;

    printf("The total number of even numbers between 1 to 200 is %.2d\n", n);
    sum = n * (n + 1);
    printf("The sum of even numbers is %.2d", sum);

    return 0;
}
