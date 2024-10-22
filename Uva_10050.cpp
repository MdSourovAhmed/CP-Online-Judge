#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, p;
        scanf("%d%d", &n, &p);
        int P[p];
        for (int i = 0; i < p; ++i)
            scanf("%d", &P[i]);
        int dys = 1, ans = 0;
        while (dys <= n)
        {
            int t = dys % 7;
            if (!t || t == 6)
            {
                dys++;
                continue;
            }
            for (int i = 0; i < p; ++i)
            {
                if (dys % P[i] == 0)
                {
                    ans++;
                    break;
                }
            }
            dys++;
        }
        printf("%d\n", ans);
    }
}