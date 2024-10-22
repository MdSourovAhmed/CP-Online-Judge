#include <bits/stdc++.h>
using namespace std;
const int N = 1e7 + 7;
int v[N], n;

int chk(int mid)
{
    int ans = mid, d;
    for (int i = 0; i < n; ++i)
    {
        (i == 0) ? d = v[0] : d = v[i] - v[i - 1];
        if (d > mid)
            return -1;
        if (d == mid)
            mid--;
        else if (d < mid)
            continue;
    }
    return ans;
}

int main()
{
    int t, c = 0;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; ++i)
            cin >> v[i];

        printf("Case %d: ", ++c);

        int l = v[0], r = v[n - 1], ans;

        while (r >= l)
        {
            int mid = (l + r) / 2;
            int d = chk(mid);
            if (d == -1)
                l = mid + 1;
            else
            {
                ans = mid;
                r = mid - 1;
            }
        }

        cout << ans << endl;
    }
}