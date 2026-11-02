
#include <stdio.h>

float calculateBase(float wt)
{
    float base;

    if (wt <= 2)
        base = 200;
    else if (wt <= 5)
        base = 400;
    else
        base = 700;

    return base;
}

float calculateDistance(float dist)
{
    float dc;

    if (dist > 10)
        dc = (dist - 10) * 20;
    else
        dc = 0;

    return dc;
}

float calculateDiscount(float total, int mem)
{
    float disc;

    if (mem == 1 && total > 1000)
        disc = total * 0.10;
    else
        disc = 0;

    return disc;
}

int main()
{
    float wt, dist, base, dc, total, disc, final;
    int mem;

    printf("Enter parcel weight in kg: ");
    scanf("%f", &wt);

    printf("Enter distance in km: ");
    scanf("%f", &dist);

    printf("Are you a member? (1 Yes, 0 No): ");
    scanf("%d", &mem);

    base = calculateBase(wt);
    dc = calculateDistance(dist);

    total = base + dc;
    disc = calculateDiscount(total, mem);
    final = total - disc;

    printf("\nBase charges: Rs. %.2f\n", base);
    printf("Distance charges: Rs. %.2f\n", dc);
    printf("Discount: Rs. %.2f\n", disc);
    printf("Final amount: Rs. %.2f\n", final);

    return 0;
}
