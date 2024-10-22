#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a = 2, b = n;
    if (n <= 3)
    {
        if (n == 1)
            printf("1\n");
        else
            puts("NO SOLUTION");
        return 0;
    }
    while (n--)
    {
        if (a > b)
            a = 1;
        printf("%d ", a);
        a += 2;
    }
    printf("\n");
}