#include <bits/stdc++.h>
using namespace std;
int n, m;
vector<int> v(1e7);
bool chk(int vl)
{
    int s = 0, c = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] > vl)
            return 0;
        if (s + v[i] > vl)
        {
            c++;
            s = 0;
        }
        s += v[i];
    }
    return c <= m-1;
}

int main()
{
    while (scanf("%d%d", &n, &m) == 2)
    {
        for (int i = 0; i < n; ++i)
            cin >> v[i];
        int f = 0, l = INT_MAX, mid, ans;
        while (l > f)
        {
            mid = (f + l) / 2;
            if (chk(mid))
            {
                l = mid;
                ans = mid;
            }
            else
                f = mid + 1;
        }

        cout << ans << endl;
    }
}