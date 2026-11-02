
#include <stdio.h>

int checkEligibility(int age, float sal, float pay)
{
    float rem;

    rem = sal - pay;

    if (age >= 21 && sal >= 50000 && rem >= sal * 0.40)
        return 1;
    else
        return 0;
}

float calculateLoan(float sal, float pay)
{
    float rem;

    rem = sal - pay;

    return rem * 10;
}

int main()
{
    int age, eligible;
    float sal, pay, rem, loan;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter monthly salary: ");
    scanf("%f", &sal);

    printf("Enter existing monthly loan payments: ");
    scanf("%f", &pay);

    rem = sal - pay;

    eligible = checkEligibility(age, sal, pay);

    if (age < 21)
        printf("Ineligible: Age must be at least 21.\n");

    if (sal < 50000)
        printf("Ineligible: Salary must be at least Rs. 50000.\n");

    if (rem < sal * 0.40)
        printf("Ineligible: Less than 40%% salary remains.\n");

    if (eligible == 1)
    {
        loan = calculateLoan(sal, pay);

        printf("You are eligible for the loan.\n");
        printf("Remaining income: Rs. %.2f\n", rem);
        printf("Maximum loan amount: Rs. %.2f\n", loan);
    }

    return 0;
}
