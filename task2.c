
#include <stdio.h>

int main()
{
    int sales[2][3][4];
    int prodTot[2][3], branchTot[2], weekTot[4];
    int i, j, k, highProd[2], highWeek, highBranch;

    for (i = 0; i < 2; i++)
    {
        branchTot[i] = 0;

        for (j = 0; j < 3; j++)
        {
            prodTot[i][j] = 0;

            for (k = 0; k < 4; k++)
            {
                printf("Enter sales for Branch %d, Product %d, Week %d: ",
                       i + 1, j + 1, k + 1);
                scanf("%d", &sales[i][j][k]);

                prodTot[i][j] = prodTot[i][j] + sales[i][j][k];
                branchTot[i] = branchTot[i] + sales[i][j][k];
            }
        }
    }

    for (k = 0; k < 4; k++)
    {
        weekTot[k] = 0;

        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 3; j++)
            {
                weekTot[k] = weekTot[k] + sales[i][j][k];
            }
        }
    }

    for (i = 0; i < 2; i++)
    {
        highProd[i] = 0;

        for (j = 0; j < 3; j++)
        {
            if (prodTot[i][j] > prodTot[i][highProd[i]])
            {
                highProd[i] = j;
            }
        }
    }

    highWeek = 0;

    for (k = 1; k < 4; k++)
    {
        if (weekTot[k] > weekTot[highWeek])
        {
            highWeek = k;
        }
    }

    highBranch = 0;

    if (branchTot[1] > branchTot[0])
    {
        highBranch = 1;
    }

    printf("\n===== MONTHLY SALES REPORT =====\n");

    for (i = 0; i < 2; i++)
    {
        printf("\nBranch %d:\n", i + 1);

        for (j = 0; j < 3; j++)
        {
            printf("Product %d total sales: %d\n",
                   j + 1, prodTot[i][j]);
        }

        printf("Highest-selling product: Product %d\n",
               highProd[i] + 1);

        printf("Total sales of branch: %d\n", branchTot[i]);
    }

    printf("\nWeek with highest overall sales: Week %d\n",
           highWeek + 1);

    printf("Branch with greatest sales: Branch %d\n",
           highBranch + 1);

    return 0;
}
