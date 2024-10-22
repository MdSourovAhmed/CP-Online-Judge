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

ll s = 0, tt = 0;
vector<int> v(30);
int vis[30];
int k, n;
bool subset(int i)
{
    if (!k)
        return 1;
    else if (tt == s)
    {
        k--;
        return subset(0);
    }
    else if (tt > s || i == n || k < 0)
        return 0;
    else
    {
        if (tt >= v[i] && !vis[i])
        {
            vis[i] = 1;
            tt += v[i];
            if (subset(i + 1))
                return 1;
            vis[i] = 0;
        }
        tt -= v[i];
        if (subset(i + 1))
            return 1;
    }
    return 0;
}

string solve()
{
    // bool ans = false;
    // subset(v, 0, ans);
    return (subset(0) ? "yes" : "no");
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        // cin.ignore();

        memset(vis, 0, sizeof(vis));
        for (int i = 0; i < n; ++i)
            cin >> v[i];
        if (s % 4)
            cout << "no\n";
        else
        {
            s /= 4;
            cout << solve() << endl;
        }
        s = 0;
        tt = 0;
        k = 4;
    }
}