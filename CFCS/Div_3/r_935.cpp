// https://codeforces.com/blog/entry/127377
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve_B()
{
    
}
void solve_A()
{
    ll a, b, c;
    cin >> a >> b >> c;
    ll ans = a + b / 3;
    b %= 3;
    c += b;
    if (b && c < 3)
        ans = -1;
    else
        ans += (c + 2) / 3;
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        // solve_D();
        // solve_C();
        solve_B();
        // solve_A();
}