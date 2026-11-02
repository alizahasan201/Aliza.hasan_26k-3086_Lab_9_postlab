
#include <stdio.h>

int main()
{
    float temp[2][3][4];
    float avg[2][3], highTemp[2];
    float total;
    int i, j, k, count;

    count = 0;

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            total = 0;

            printf("\nWard %d, Patient %d\n", i + 1, j + 1);

            for (k = 0; k < 4; k++)
            {
                printf("Enter temperature reading %d: ", k + 1);
                scanf("%f", &temp[i][j][k]);

                total = total + temp[i][j][k];

                if (temp[i][j][k] > 37.5)
                {
                    count++;
                }
            }

            avg[i][j] = total / 4.0;
        }
    }

    for (i = 0; i < 2; i++)
    {
        highTemp[i] = temp[i][0][0];

        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 4; k++)
            {
                if (temp[i][j][k] > highTemp[i])
                {
                    highTemp[i] = temp[i][j][k];
                }
            }
        }
    }

    printf("\n===== HOSPITAL TEMPERATURE REPORT =====\n");

    for (i = 0; i < 2; i++)
    {
        printf("\nWard %d:\n", i + 1);

        for (j = 0; j < 3; j++)
        {
            printf("Patient %d average temperature: %.2f\n",
                   j + 1, avg[i][j]);

            if (avg[i][j] > 38.0)
            {
                printf("Patient %d has average temperature above 38 C\n",
                       j + 1);
            }
        }

        printf("Highest temperature in Ward %d: %.2f C\n",
               i + 1, highTemp[i]);
    }

    printf("\nReadings above 37.5 C: %d\n", count);

    return 0;
}
