#include <stdio.h>
int main()
{
    int v[4], a, b, m = 2e9;
    for (int i = 0; i < 4; ++i)
    {
        scanf("%d", &v[i]);
        if (m > v[i])
            m = v[i];
    }
    int ans = 0;
    scanf("%d %d", &a, &b);
    while (a <= b)
    {
        if (a < m)
            ans++;
        a++;
    }
    printf("%d\n", ans);
}
