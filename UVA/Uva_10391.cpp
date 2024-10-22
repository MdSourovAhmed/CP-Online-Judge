#include <bits/stdc++.h>
using namespace std;
int Min(int a, int b) { return (a > b) ? b : a; }
int main()
{
    string s;
    unordered_map<string, int> m;
    vector<string>v;
    int l = INT_MAX;
    while (cin >> s)
    {
        // if(s=="#")break;
        m[s]=1;
        l = Min(l, s.size());
        v.push_back(s);
    }

    for (string a : v)
    {
        int d = a.size();
        for (int i = l; i < d; ++i)
        {
            string x = a.substr(0, i);
            string y = a.substr(i, d-i);
            if (m[x] && m[y])
            {
                cout << a<< endl;
                break;
            }
        }
    }
    return 0;
}