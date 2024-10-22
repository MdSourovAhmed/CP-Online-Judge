#include <stdio.h>
#include <math.h>
typedef long long ll;
ll Ans(ll n)
{
    ll H = 0,i,d=sqrt(n);
    for (i = 1; i*i <= n; ++i)
        H += (n / i);
    return H*2-d*d;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    ll n;
    scanf("%lld",&n);
    printf("%lld\n", 1ll * Ans(n));
    }
}