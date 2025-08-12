#include <stdio.h>

main() {
    int income;
    int tax;

    printf("Enter income: ");
    scanf("%d", &income);

    if (income < 150000) {
        printf("No tax");
        tax = 0;
    }
    else if (income > 150001 && income < 300000) {
        tax = income * 0.1;
    }
    else if (income > 300001 && income < 500000) {
        tax = income * 0.20;
    }
    else if (income > 500000) {
        tax = income * 0.30;
    } else {
        printf("Invalid input.");
    }

    int totalIncome = income - tax;
    printf("Total income excluding tax is %d", totalIncome);

    return 0;
}

//det = b^2 - (4*a*c);
//if (det > 0) {roots}
//det == 0 -b/ 2*a
//det< 0 -b/2a ; sqrt(-det/2a)
