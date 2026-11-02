
#include <stdio.h>

void showBalance(float bal)
{
    printf("Current balance: Rs. %.2f\n", bal);
}

float depositMoney(float bal, float amo)
{
    if (amo > 0)
    {
        bal = bal + amo;
        printf("Deposit successful.\n");
        printf("Updated balance: Rs. %.2f\n", bal);
    }
    else
        printf("Amount must be positive.\n");

    return bal;
}

float withdrawMoney(float bal, float amo)
{
    if (amo <= 0)
        printf("Amount must be positive.\n");
    else if (amo > 10000)
        printf("Maximum withdrawal is Rs. 10000.\n");
    else if (amo > bal)
        printf("Insufficient balance.\n");
    else
    {
        bal = bal - amo;

        printf("Withdrawal successful.\n");
        printf("Updated balance: Rs. %.2f\n", bal);

        if (bal < 5000)
            printf("Warning: Low balance!\n");
    }

    return bal;
}

int main()
{
    int choice;
    float bal, amo;

    bal = 20000;

    while (1)
    {
        printf("\n--- ATM MENU ---\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            showBalance(bal);
        }
        else if (choice == 2)
        {
            printf("Enter deposit amount: ");
            scanf("%f", &amo);

            bal = depositMoney(bal, amo);
        }
        else if (choice == 3)
        {
            printf("Enter withdrawal amount: ");
            scanf("%f", &amo);

            bal = withdrawMoney(bal, amo);
        }
        else if (choice == 4)
        {
            printf("Thank you for using the ATM.\n");
            break;
        }
        else
        {
            printf("Invalid choice.\n");
        }
    }

    return 0;
}
