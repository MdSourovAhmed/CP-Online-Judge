// https://codeforces.com/blog/entry/125878
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <deque>
#include <fstream>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include <stdio.h>
#include <bitset>
#include <stdlib.h>
typedef long long ll;
const ll N = 1e7;
const ll MOD = 1e9 + 7;
using namespace std;
typedef int in;
typedef unsigned long long ull;
const double pi = 2 * acos(0);
#define maxi 40000
#define pf printf
#define sc scanf
#define pb push_back
#define MEM(x, y) (memset((x), (y), sizeof(x)))
#define MIN(x, y) ((x) < (y) ? (x) : (y))
#define MAX(x, y) ((x) > (y) ? (x) : (y))
#define load(array, size)          \
    for (int i = 0; i < size; i++) \
        cin >> array[i];
#define n_l cout << endl
#define clear_data(array) memset(array, 0, sizeof(array))
#define highest_int 2147483647

void solve_F()
{
    int a, b;
    cin >> a >> b;
    vector<int> indegree(a + 1, 0);
    vector<vector<int>> p(b, vector<int>(a));
    vector<int> authors(b);
    for (int i = 0; i < b; ++i)
    {
        for (int j = 0; j < a; ++j)
        {
            cin >> p[i][j];
            p[i][j]--;
        }
        authors[i] = p[i][0];
    }

    vector<vector<int>> g(a);
    for (int i = 0; i < b; ++i)
    {
        for (int j = 1; j + 1 < a; ++j)
        {
            int i1 = p[i][j], i2 = p[i][j + 1];
            indegree[i2]++;
            g[i1].push_back(i2);
        }
    }

    queue<int> q;
    for (int i = 0; i < a; ++i)
    {
        if (!indegree[i])
            q.push(i);
    }
    int cnt = 0;

    while (!q.empty())
    {
        int t = q.front();
        q.pop();
        cnt++;
        for (int cld : g[t])
        {
            indegree[cld]--;
            if (!indegree[cld])
                q.push(cld);
        }
    }

    if (cnt == a)
        cout << "YES\n";
    else
        cout << "NO\n";
    return;
}
// void solve_E()
// {
//     int n, m;
//     cin >> n >> m;
//     vector<string> v(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }
//     vector<int> dgt, zro;
//     ll ans = 0;
//     for (string s : v)
//     {
//         dgt.push_back(s.size());
//         int c = 0;
//         for (int i = s.size() - 1; i >= 0 && s[i] == '0'; --i)
//             c++;
//         zro.push_back(c);
//     }
//     for (int i = 0; i < n; ++i)
//         ans += dgt[i] - zro[i];

//     sort(zro.rbegin(), zro.rend());

//     for (int i = 0; i < n; ++i)
//         if (i & 1)
//             ans += zro[i];

//     if (ans > m)
//         cout << "Sasha" << endl;
//     else
//         cout << "Anna" << endl;
// }
// void solve_D()
// {
//     int n, x, y;
//     cin >> n >> x >> y;
//     int v[n];
//     for (int i = 0; i < n; ++i)
//         cin >> v[i];
//     map<pair<int, int>, int> m;
//     ll a, b, ans = 0, d;
//     for (int i = 0; i < n; ++i)
//     {
//         a = v[i] % x;
//         b = v[i] % y;
//         if (a)
//             d = x - a;
//         else
//             d = 0;
//         if (m.find({d, b}) != m.end())
//             ans += m[{d, b}];
//         m[{a, b}] += 1;
//     }

//     cout << ans << endl;
// }
// void solve_C()
// {
//     int n;
//     cin >> n;
//     int v[n];
//     for (int i = 0; i < n; ++i)
//         cin >> v[i];

//     int a = 1, b = 1;
//     for (int i = 1; i < n; ++i)
//         if (v[i] == v[i - 1])
//             a++;
//         else
//             break;
//     for (int i = n - 1; i > 0; --i)
//         if (v[i] == v[i - 1])
//             b++;
//         else
//             break;
//     // cout<<a<<" "<<b<<endl;
//     int ans = 0;
//     if (v[n - 1] == v[0])
//         ans = a + b;
//     else
//         ans = max(a, b);
//     if (a == b && a == n)
//         ans = n;
//     cout << n - ans << endl;
// }
// void solve_B()
// {
//     int n, s = 0;
//     cin >> n;
//     int v[n];
//     for (int i = 0; i < n; ++i)
//     {
//         cin >> v[i];
//         s += v[i];
//     }

//     int d = s / n, t = 0;
//     if (v[0] < d)
//     {
//         cout << "NO\n";
//         return;
//     }
//     for (int i = 1; i < n; ++i)
//     {
//         v[i] += v[i - 1] - d;
//         if (v[i] < d)
//         {
//             cout << "NO\n";
//             return;
//         }
//     }
//     cout << "YES\n";
// }
// void solve_A()
// {
//     int n, sz = 26;
//     cin >> n;
//     string mins = "zzz", cur;
//     for (int i = 0; i < sz; i++)
//     {
//         for (int j = 0; j < sz; j++)
//         {
//             for (int k = 0; k < sz; k++)
//             {
//                 if (i + j + k + 3 == n)
//                 {
//                     cur += char(i + 'a');
//                     cur += char(j + 'a');
//                     cur += char(k + 'a');
//                     mins = min(cur, mins);
//                 }
//             }
//         }
//     }
//     cout << mins << "\n";
// }

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve_F();
    // solve_E();
    // solve_D();
    // solve_B();
    // solve_C();
    // solve_A();
}