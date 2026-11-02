
#include <stdio.h>

void checkEvenOdd(int n)
{
    if (n % 2 == 0)
        printf("The number is even.\n");
    else
        printf("The number is odd.\n");
}

void checkPalindrome(int n)
{
    int org, rev, d;

    org = n;
    rev = 0;

    while (n > 0)
    {
        d = n % 10;
        rev = rev * 10 + d;
        n = n / 10;
    }

    if (org == rev)
        printf("The number is a palindrome.\n");
    else
        printf("The number is not a palindrome.\n");
}

void checkPrime(int n)
{
    int i, prime;

    prime = 1;

    if (n <= 1)
        prime = 0;
    else
    {
        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                prime = 0;
                break;
            }
        }
    }

    if (prime == 1)
        printf("The number is prime.\n");
    else
        printf("The number is not prime.\n");
}

int main()
{
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    checkEvenOdd(n);
    checkPalindrome(n);
    checkPrime(n);

    return 0;
}
