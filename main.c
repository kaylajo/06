#include <stdio.h>

int factorial(int n)
{
    int i;
    int res = 1;

    for (i = 1; i <= n; i++)
    res = res * i;

    return res;
}

int combination(int n, int r)
{
    int up, down;
    up= factorial(n);
    down= factorial(r) * factorial(n - r);

    return(up/down);
}
int main(void)
{
    int n, r;
    int result;

    printf("input n : ");
    scanf("%d", &n);
    printf("input r : ");
    scanf("%d", &r);

    result = combination(n, r);

    printf("C(%d, %d) = %d\n", n, r, result);

    return 0;
}