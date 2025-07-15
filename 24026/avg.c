#include <stdio.h>

int main() {
int num1, num2, num3, sum;
float avg;
printf("enter num1, num2, num3 values: ");
scanf("%d%d%d", &num1, &num2, &num3);

sum = num1 + num2 + num3;
printf("\n the sum of num1, num2, num3 is %d", sum);
avg = (float)sum/3;
printf("\n the average of three numbers is %f", avg);

return 0;
}
