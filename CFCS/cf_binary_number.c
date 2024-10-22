#include <stdio.h>
int get_num(int n)
{
    int s = 0, p = 1;
    while (n)
    {
        s += p * (n % 10);
        p *= 2;
        n /= 10;
    }
    return s;
}
int main()
{
    int n, c = 0;
    scanf("%d", &n);
    int N = get_num(n);
    // printf("%d",N);
    while (N != 1)
    {
        if (N & 1)
            N++;
        else
            N >>= 1;
        c++;
    }
    printf("%d", c);
}