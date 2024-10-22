#include <bits/stdc++.h>
using namespace std;

int fun(int n)
{
    return log10(n) + 1;
}

int main()
{
    string s;
    while (cin >> s && s != "END")
    {
        int sz = s.size();
        if(sz==1){cout<<2<<endl;continue;}
        if(sz==2){cout<<1<<endl;continue;}
        int ans = 2;
        while (fun(sz) != sz)
        {
            ans++;
            sz = fun(sz);
        }
        cout << ans << endl;
    }
}
