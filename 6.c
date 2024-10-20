#include <stdio.h>
int main()
{
    int a = 0, b = 1, n, i, sum = 0;
    printf("enter value of N\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("%3d",a);
        sum=a+b;
        a=b;
        b=sum;
    }
    return 0;
}