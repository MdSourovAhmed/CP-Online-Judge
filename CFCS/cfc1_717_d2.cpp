// https://codeforces.com/blog/entry/89846
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void Solve1()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        int c = k, d;
        for (auto &a : v)
        {
            cin >> a;
            d = min(a, k);
            a -= d;
            k -= d;
        }
        v[n - 1] += c - k;
        for (auto &a : v)
            cout << a << " ";
        cout << endl;
    }
}

void Solve2()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x = 0;
        cin >> n;
        vector<int> v(n);
        for (auto &a : v)
        {
            cin >> a;
            x ^= a;
        }
        bool ans = false;
        if (!x)
            ans = true;
        else
        {
            int cnt = 0;
            int d = 0;
            for (auto &i : v)
            {
                d ^= i;
                if (d == x)
                {
                    cnt += 1;
                    d = 0;
                }
                if (cnt > 2)
                    ans = true;
            }
        }
        cout<<(ans?"YES\n":"NO\n");
    }
}

int main()
{
    // Solve1();
    Solve2();
    return 0;
}