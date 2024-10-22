#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t = 0;
    cin >> n;
    while (n--)
    {
        char s[100001] = {'\0'};
        scanf(" %[^\n]", s);
        string ss;
        int cn = 0;
        for (int i = 0; s[i]; ++i)
        {
            char c = s[i];
            if (c >= 'a' && c <= 'z')
            {
                ss .push_back(c);;
                cn++;
            }
        }
        // cout << ss << " " << cn << endl;
        bool sign = true;
        int d = sqrt(cn);
        if (d * d != cn)
            sign = false;
        int f = 0;
        printf("Case #%d:\n", ++t);
        cn--;
        while (cn > f)
        {
            if (ss[f] != ss[cn])
            {
                sign = false;
                break;
            }
            f++;
            cn--;
        }

        if (sign)
            cout << d << endl;
        else
            cout << "No magic :(\n";
    }
}