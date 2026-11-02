
#include <stdio.h>

float calculateBonus(float sal, int years)
{
    float bonus;

    if (years > 5)
        bonus = sal * 0.15;
    else if (years >= 3)
        bonus = sal * 0.10;
    else
        bonus = sal * 0.05;

    return bonus;
}

float calculateTax(float salary)
{
    float tax;

    if (salary > 100000)
        tax = salary * 0.05;
    else
        tax = 0;

    return tax;
}

int main()
{
    float sal, bonus, tax, final;
    int years;

    printf("Enter basic salary: ");
    scanf("%f", &sal);

    printf("Enter years of service: ");
    scanf("%d", &years);

    bonus = calculateBonus(sal, years);
    final = sal + bonus;

    tax = calculateTax(final);
    final = final - tax;

    printf("\nBasic Salary: Rs. %.2f\n", sal);
    printf("Bonus: Rs. %.2f\n", bonus);
    printf("Tax: Rs. %.2f\n", tax);
    printf("Final Salary: Rs. %.2f\n", final);

    return 0;
}
