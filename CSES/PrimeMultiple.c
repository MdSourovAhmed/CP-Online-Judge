#include <stdio.h>
#include <math.h>
typedef long long ll;
ll n, k;
ll Ans(ll a, ll i, ll v[])
{
    if (i == k)
        return 0;
    ll ans = a / v[i];
    ans -= Ans(a / v[i], i + 1, v);
    ans += Ans(a, i + 1, v);
    return ans;
}

int main()
{
    scanf("%lld%lld", &n, &k);
    ll v[k];
    for (int i = 0; i < k; ++i)
        scanf("%lld", &v[i]);
    printf("%lld\n", Ans(n, 0, v));
}