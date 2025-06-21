#include <bits/stdc++.h>
using namespace std;

int main()
{
   // string gene = "GAAATAAA";
    string gene; 
    cin >> gene;
    map<char, int> m;
    for (char c : gene)
        m[c]++;
    int len = gene.size();
    int goal = len / 4;
    auto maxCount = [&]()
    {
        return max({m['A'], m['C'], m['G'], m['T']});
    };

    int ans = INT_MAX, l = 0;
    for (int r = 0; gene[r]; r++)
    {
        m[gene[r]]--;
        while (gene[l] && maxCount()<= goal)
        {
            ans = min(ans, r - l + 1);
            m[gene[l]]++;
            l++;
        }
    }

    cout << ans;
    return 0;
}
