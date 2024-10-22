#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 1e7 + 7;
vector<ll> g[N];
bool vis[N];
vector<ll> v;
ll dfs(ll n)
{
    ll c = v[n];
    vis[n] = 1;
    for (ll cld : g[n])
    {
        if (!vis[cld])
            c = min(c, dfs(cld));
    }
    return c;
}
int main()
{
    int n, m;
    cin >> n >> m;
    int l = n;
    while (n--)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    while (m--)
    {
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    ll ans = 0;
    for (ll i = 0; i < l; ++i)
        if (!vis[i])
            ans += dfs(i);
    cout << ans << endl;
}
