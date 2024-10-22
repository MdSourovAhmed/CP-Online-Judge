#include <stdio.h>
int main()
{
    long long n, l, u, t, m;
    while (scanf("%lld%lld%lld", &n, &l, &u) == 3)
    {
        m = 0;
        for (int i = 31; i >= 0; i--)
        {
            t = m | (1ll << i);
            if (t <= u && !(n & (1ll << i)))
                m = t;
            if (t <= l && (l & (1ll << i)))
                m = t;
        }
        printf("%lld\n", m);
    }
}