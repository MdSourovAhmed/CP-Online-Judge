#include <stdio.h>
int n, t;
int main()
{
    scanf("%d%d", &n, &t);
    int v[n];
    for (int i = 0; i < n - 1; ++i)
        scanf("%d", &v[i]);

    int c = 1;
    do
    {
        c += v[c - 1];
        if (c == t)
        {
            printf("YES\n");
            return 0;
        }
    } while (c < n);
    printf("NO\n");
    return 0;
}
