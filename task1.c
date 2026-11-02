
#include <stdio.h>

int main()
{
    int marks[2][3][4];
    int total[2][3];
    float avg[2][3];
    int secTot[2], highStu[2];
    float secAvg[2];
    int i, j, k, count, highSec;

    count = 0;

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            total[i][j] = 0;

            printf("\nSection %d, Student %d\n", i + 1, j + 1);

            for (k = 0; k < 4; k++)
            {
                printf("Enter marks of subject %d: ", k + 1);
                scanf("%d", &marks[i][j][k]);

                total[i][j] = total[i][j] + marks[i][j][k];
            }

            avg[i][j] = total[i][j] / 4.0;

            if (avg[i][j] >= 50)
            {
                count++;
            }
        }
    }

    for (i = 0; i < 2; i++)
    {
        highStu[i] = 0;
        secTot[i] = 0;

        for (j = 0; j < 3; j++)
        {
            secTot[i] = secTot[i] + total[i][j];

            if (total[i][j] > total[i][highStu[i]])
            {
                highStu[i] = j;
            }
        }

        secAvg[i] = secTot[i] / 12.0;
    }

    highSec = 0;

    if (secAvg[1] > secAvg[0])
    {
        highSec = 1;
    }

    printf("\n===== STUDENT RESULTS =====\n");

    for (i = 0; i < 2; i++)
    {
        printf("\nSection %d:\n", i + 1);

        for (j = 0; j < 3; j++)
        {
            printf("Student %d: Total = %d, Average = %.2f\n",
                   j + 1, total[i][j], avg[i][j]);
        }

        printf("Highest-scoring student: Student %d\n",
               highStu[i] + 1);
    }

    printf("\nStudents with average at least 50: %d\n", count);

    printf("Section with highest overall average: Section %d\n",
           highSec + 1);

    return 0;
}
