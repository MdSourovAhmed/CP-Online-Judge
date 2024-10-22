#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> &a, pair<int, int> &b)
{
    return a.first < b.first;
}

void print(auto a)
{
    for (int i = 0; i < a.size(); ++i)
        cout << a[i].first << " " << a[i].second << endl;
}

int main()
{
    int a, b;
    cin >> a >> b;
    vector<pair<int, int>> v_p;
    for (int i = 0, j = 1; i < a; ++i)
    {
        int x;
        cin >> x;
        v_p.push_back({x, j++});
    }

    // print(v_p);

    sort(v_p.begin(), v_p.end(), cmp);

    vector<int> ans;
    for (int i = 0; i < a && b >= v_p[i].first; i++)
    {
        b -= v_p[i].first;
        ans.push_back(v_p[i].second);
    }
    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); ++i)
    {
        if (i)
            putchar(' ');
        cout << ans[i];
    }
    cout << "\n";

    // print(v_p);
}