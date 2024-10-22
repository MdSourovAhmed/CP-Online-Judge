#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> v;
vector<vector<int>> vv;

void solve(int a, int l)
{
    if (a == 1)
    {
        vv.push_back(v);
        return;
    }

    for (int i = l; i * i <= a; i++)
    {
        if (a % i == 0)
        {
            v.push_back(i);
            solve(a / i, i);
            v.pop_back();
        }
    }
    v.push_back(a);
    solve(1, a);
    v.pop_back();
}

int main()
{
    while (scanf("%d", &n) && n)
    {
        vv.clear();
        // v.clear();
        solve(n, 2);
        cout << vv.size() - 1 << endl;

        for (int j = 0; j < vv.size() - 1; j++)
        {
            auto a = vv[j];
            for (int i = 0; i < a.size(); ++i)
            {
                if (i)
                    cout << " ";
                cout << a[i];
            }
            cout << endl;
        }
    }
}