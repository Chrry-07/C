#include <stdio.h>

int main() {
    float basicPay, hra, ta, totalSalary;

    printf("Enter Basic Pay of the employee: ");
    scanf("%f", &basicPay);

    hra = 0.10 * basicPay;   // 10% of basic pay
    ta  = 0.05 * basicPay;   // 5% of basic pay

    totalSalary = basicPay + hra + ta;

    printf("HRA = %.2f\n", hra);
    printf("TA = %.2f\n", ta);
    printf("Total Salary = %.2f\n", totalSalary);

    return 0;
}
