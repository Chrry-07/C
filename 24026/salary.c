#include <stdio.h>

main() {
    char gender;
    int salary, bonus, exBonus = 0;

    printf("Enter gender character: ");
    scanf("%c", &gender);

    printf("Enter salary: ");
    scanf("%d", &salary);

    if( salary < 10000) {
        exBonus = (float)((salary * 2) / 100);
    }
        if (gender == 'm' || gender == 'M') {
            bonus = (float)((salary * 5) / 100);
        } else {
            bonus = (float)((salary * 10) / 100);
        }

    int totalSalary = exBonus + bonus;
    printf("Total Salary is %d", &totalSalary);

    return 0;
}
