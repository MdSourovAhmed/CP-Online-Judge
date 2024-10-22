#include <stdio.h>
#define ll long long
const ll M = 1e9 + 7;

int main()
{
    ll n;
    ll ans = 0;
    scanf("%lld", &n);
    // for (int i =1; i <= n; ++i)
    // {
    //     ans <<= 1;
    //     ans %= M;
    // }
    while(n/5)
    {
        ans+=n/5;
        n/=5;
    }
    printf("%lld", ans * 1ll);
}