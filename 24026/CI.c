#include <stdio.h>
#include <math.h>

int main() {

    int p, t, r, n;
    int A;
    int CI;

    printf("Enter the value of initial deposit: ");
    scanf("%d", &p);

    printf("Enter the value of annual interest rate: ");
    scanf("%d", &r);

    printf("Enter the value of time: ");
    scanf("%d", &t);

    printf("Enter the value no.of compounding periods per year: ");
    scanf("%d", &n);

    A = p * pow((1 + (r / n)), (n * t));
    CI = A - p;

    printf("The compound interest is %.2d\n" , CI);

    return 0;
}
