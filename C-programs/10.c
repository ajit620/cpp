#include <stdio.h>
int main()
{
    int i, n, sum = 0, fact = 1, dig, x;
    printf("enter the number\n");
    scanf("%d", &n);
    x = n;
    while (n > 0)
    {
        dig = n % 10;
        fact = 1;
        for (i = dig; i >= 1; i--)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        n = n / 10;
    }
    if (sum == x)
    {
        printf("%d is a special no.\n", sum);
    }
    else
    {
        printf("%d is not a special no.\n",sum);
    }
}
