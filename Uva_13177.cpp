#include <bits/stdc++.h>
using namespace std;
int m, n;
const int N = 1e7 + 7;
int A[N];
bool chk(int v)
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] % v)
            s += A[i] / v + 1;
        else
            s += A[i] / v;
        if (s > m)
            return false;
    }
    return true;
}

int main()
{
    while (cin >> m >> n)
    {
        for (int i = 0; i < n; i++)
            cin >> A[i];
        int l = 1, r = N, mid, ans = N;
        while (r > l)
        {
            mid = (l + r) / 2;
            if (chk(mid))
            {
                ans = min(ans, mid);
                r = mid;
            }
            else
                l = mid + 1;
        }
        cout << r << endl;
    }
}