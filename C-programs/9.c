#include <stdio.h>
int main()
{
    int n, i,count=0;
    printf("enter the number\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if(n%i==0)
            count++;
    }
    if(count==2)
    printf("prime no.\n");
    else
    printf("not a prime no.\n");
    return 0;
}