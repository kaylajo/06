#include <stdio.h>

int sumTwo(int a, int b)
{
    return a + b;
}
int square(int n)
{
    return n * n;
}
int get_max(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}

int main(void)
{
    printf("sumTwo result = %d\n", sumTwo(2, 5));
    printf("square result = %d\n", square(10));
    printf("get_max result = %d\n", get_max(2, 5));
    return 0;
}