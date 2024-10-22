// https://codeforces.com/contest/1452/problems

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve1()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int ans = min(n, k) * 2;
        int d = max(n, k) - (ans / 2);
        if (!d)
        {
            cout << ans << endl;
            continue;
        }
        ans += (2 * (d - 1) + 1);
        cout << ans << endl;
    }
}

void solve2()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        ll s = 0;
        cin >> n;
        vector<int> v(n);
        ll mx=-1;
        for (auto &a : v)
        {
            cin >> a;
            s += a;
            if(a>mx)mx=a;
        }
        
        //decide an average value for other n-1 indexes
        ll a=(((s+n-2)/(n-1)));

        //which(maximum) should be taken to make other indexes equal 
        ll d=max(a,mx);

        ll ans=d*(n-1)-s;
        cout<<ans<<endl;
    } 
}

int main()
{
    // solve1();
    solve2();
    return 0;
}