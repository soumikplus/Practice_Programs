#include <stdio.h>
int gcd(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    else if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}
int main()
{
    int a, b;
    printf("Enter two number : ");
    scanf("%d%d", &a, &b);
    printf("%d", gcd(a, b));
    return 0;
}