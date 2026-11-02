
#include <stdio.h>

float calculateSubtotal(float pri, int qty)
{
    return pri * qty;
}

float calculateDiscount(float sub, int mem)
{
    float disc;

    disc = 0;

    if (sub > 5000)
        disc = disc + sub * 0.10;

    if (mem == 1)
        disc = disc + sub * 0.05;

    return disc;
}

float calculateFee(float amt, int card)
{
    float fee;

    if (card == 1)
        fee = amt * 0.02;
    else
        fee = 0;

    return fee;
}

int main()
{
    float pri, sub, disc, amt, fee, final;
    int qty, mem, card;

    printf("Enter product price: ");
    scanf("%f", &pri);

    printf("Enter quantity: ");
    scanf("%d", &qty);

    printf("Are you a member? (1 Yes, 0 No): ");
    scanf("%d", &mem);

    printf("Pay by card? (1 Yes, 0 No): ");
    scanf("%d", &card);

    sub = calculateSubtotal(pri, qty);
    disc = calculateDiscount(sub, mem);

    amt = sub - disc;

    fee = calculateFee(amt, card);
    final = amt + fee;

    printf("\nSubtotal: Rs. %.2f\n", sub);
    printf("Total discount: Rs. %.2f\n", disc);
    printf("Payment fee: Rs. %.2f\n", fee);
    printf("Final payable amount: Rs. %.2f\n", final);

    return 0;
}
