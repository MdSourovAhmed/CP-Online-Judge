#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while (cin >> n && n)
    {
        cin.ignore();
        string s;
        cin >> s;
        cin.ignore();
        int ans = INT_MAX, p_i = -1;
        for (int i = 0; s[i]; ++i)
        {
            if (s[i] == 'Z')
            {
                ans = 0;
                break;
            }
            if (p_i == -1 && (s[i] == 'R' || s[i] == 'D'))
                p_i = i;
            if (s[p_i] == s[i])
                p_i = i;
            if (s[p_i] == 'D' && s[i] == 'R')
            {
                ans = min(ans, abs(p_i - i));
                p_i = i;
            }
            else if (s[p_i] == 'R' && s[i] == 'D')
            {
                ans = min(ans, abs(p_i - i));
                p_i = i;
            }
        }
        cout << ans << endl;
    }
}