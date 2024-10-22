#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int ans = 0,m=1;
    while (n--)
    {
        int a=0;
        if (n != 1)
            scanf("%d", &a);
        ans^=(m^a);
        m++;
    }
    printf("%d\n", ans);
}