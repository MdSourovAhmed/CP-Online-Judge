#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const ll N = 1e5 + 9;
// bitset<N> p;
// vector<int> P;

// void seive()
// {
//     p[0] = 1;
//     p[1] = 1;
//     for (int i = 2; i * i <= N; ++i)
//     {
//         if (!p[i])
//             P.push_back(i);
//         for (int j = i * 2; j <= N; j += i)
//             p[j] = 1;
//     }
// }

void solve_B()
{
    int n;
    cin >> n;
    int a = 1, b = n;
    for (int i = 1; i <= n; ++i)
    {
        if (1 & i)
        {
            cout << a << " ";
            a++;
        }
        else
        {
            cout << b << " ";
            b--;
        }
    }
    // if(p[i])cout<<i<<" ";

    // for(int i=0;P[i]<=n;++i)
    // cout<<P[i]<<" ";

    cout << endl;
}

int main()
{
    // seive();
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, ans;
        cin >> n >> k;
        if (k <= 2 * n)
        ans=(k+1)/2;
            // if (k & 1)
            //     ans = (k / 2) + 1;
            // else
            //     ans = k / 2;
        else
        {
            ans = n;
            int a = n - 2, d = k - 2 * ans;
            
            if (d <= 2 * a)
            ans+=(d+1)/2;
            //     if (d & 1)
            //         ans += (d / 2) + 1;
            //     else
            //         ans += d / 2;

            else
            {
                ans += d - a;
            }
        }

        cout << ans << endl;
    }
}