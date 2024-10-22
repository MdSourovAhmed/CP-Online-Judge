#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n), p_s(n + 1, 0);
        int j=1;
        for (int &i : v)
        {
            cin >> i;
            p_s[j]+=p_s[j-1]+i;
            j++;
        }
        int q;cin>>q;
        while(q--)
        {
            int l,u;cin>>l>>u;
            ll sm=u+p_s[l-1];
            int it=lower_bound(p_s.begin(),p_s.end(),sm)-p_s.begin();
            if(p_s[it]-sm>sm-p_s[it-1])it--;
            it=max(it,l);
            it=min(it,n);
            cout<<it<<" ";
            // int s=l,e=n;
            // while (e>s)     
            // {
            //     int m=(s+e)/2;
            //     int sm=p_s[m]-p_s[l-1];
            //     if(sm<u){s=m;e=n;}
            //     else {s=l;e=m-1;}
            // }
            // cout<<u<<" "<<p_s[s]-p_s[l-1]<<" "<<p_s[e]-p_s[l-1]<<endl;
            // cout<<"  "<<s<<" "<<e<<endl;
            
        }
        cout<<endl;
        // int mn_c = 0, mn = INT_MAX;
        // for (int &i : v)
        // {
        //     cin >> i;
        //     mn = min(mn, i);
        // }
        // for (int &i : v)
        //     if (mn == i)
        //         mn_c++;
        // // if(mn_c==1){cout<<"YES\n";continue;}
        // for (int &i : v)
        //     if (i % mn)
        //     {
        //         mn_c = 1;
        //         break;
        //     }
        // cout << (mn_c == 1 ? "YES\n" : "NO\n");
        // int a, b, l;
        // cin >> a >> b >> l;
        // set<int> ans;
        // int p = 1;
        // while (p <= l && l % p == 0)
        // {
        //     int d = l / p;
        //     ans.insert(d);

        //     while (d % b == 0)
        //         ans.insert(d /= b);

        //     p *= a;
        // }
        // cout<<ans.size()<<endl;
        // int n, c = 0;
        // int s = 0;
        // cin >> n;
        // vector<int> a(n);
        // for (int i = 0; i < n; ++i)
        // {
        //     int x;
        //     cin >> a[i];
        //     x = a[i];
        //     if (x % 3 == 0)
        //         continue;
        //     s += x;
        // }
        // for (int &i : a)
        //     if ((s - i) % 3 == 0)
        //         c = 1;
        // if (s % 3 == 0)
        //     cout << 0 << endl;
        // else if (c)
        //     cout << 1 << endl;
        // else
        //     cout << min(2, 3 - (s % 3)) << endl;
        // cout<<s<<endl;
        // for (int &i : b)
        // {

        //     if (i % 3 == 0)
        //         continue;

        //     if ((s - i) % 3 == 0)
        //     {
        //         c++;
        //         break;
        //     }
        // }

        // for (int i = 1; i <= n; ++i)
        //     cout << i << " \n"[i == n];
        // for (int i = 1; i <= n; ++i)
        //     cout << b[i] << " \n"[i == n];
    }
}