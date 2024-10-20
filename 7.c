#include <stdio.h>
int main()
{
    int n, k = 0, d, original;
    printf("enter the number\n");
    scanf("%d", &n);
    original = n;
    while (n > 0)
    {
        d = n % 10;
        k = k * 10 + d;
        n = n / 10;
    }
    if (k == original)
    {
        printf("palindrome no.\n");
    }
    else
    {
        printf("not a palindrome no.\n");
    }
    return 0;
}