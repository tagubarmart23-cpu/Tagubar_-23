#include <stdio.h>

int main()
{
    int employee_count;
    int higher_rate_count = 0;
    double total_bonus = 0.0;

    printf("Enter the number of employees: ");
    if (scanf("%d", &employee_count) != 1 || employee_count <= 0) {
        printf("Please enter a positive number of employees.\n");
        return 1;
    }

    for (int employee = 1; employee <= employee_count; employee++) {
        double sales;
        double bonus_rate;
        double bonus;

        printf("Enter monthly sales for employee %d: ", employee);
        if (scanf("%lf", &sales) != 1 || sales < 0.0) {
            printf("Please enter a valid, non-negative sales amount.\n");
            return 1;
        }

        if (sales >= 50000.0) {
            bonus_rate = 0.10;
            higher_rate_count++;
        } else {
            bonus_rate = 0.05;
        }

        bonus = sales * bonus_rate;
        total_bonus += bonus;
        printf("Employee %d bonus: $%.2f\n", employee, bonus);
    }

    printf("\nTotal bonuses: $%.2f\n", total_bonus);
    printf("Employees receiving the 10%% bonus rate: %d\n", higher_rate_count);

    return 0;
}
