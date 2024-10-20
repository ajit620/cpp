#include <stdio.h>
int main()
{
    int a, b, c, d, e, f, g, sol = 0;
    printf("enter numbers \n");
    scanf("%d%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f, &g);
    sol=((a+b/c*d-e)*(f-g));
    printf(" solution: %d",sol);
    return 0;
}