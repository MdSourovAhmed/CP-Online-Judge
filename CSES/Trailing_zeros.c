#include <stdio.h>
#define ll long long
const ll M = 1e9 + 7;

int main()
{
    int n;
    ll ans = 0;
    scanf("%d", &n);
    while(n/5)
    {
        ans+=n/5;
        n/=5;
    }
    printf("%lld", ans * 1ll);
}