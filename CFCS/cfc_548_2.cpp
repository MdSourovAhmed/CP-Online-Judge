// https://codeforces.com/contest/1452/problems

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve1()
{
    int n;
    // cin>>n;
    scanf("%d",&n);
    char c[n];
    scanf("%s",c);
    int even_cnt=0;
    // if(c[0]==)
    for(int i=0;i<n;++i)
    {
        if((c[i]-'0')%2==0)even_cnt+=i+1;
    }
    printf("%d\n",even_cnt);
}

void solve2()
{
   
        int n;
        cin >> n;
        vector<int> v(n);
        ll ans=0;
        for (auto &a : v)
        {
            cin>>a;
        }
        ll pres=INT_MAX;
        for(int i=n-1;i>=0;--i)
        {
            pres--;
            pres=min(pres,v[i]*1ll);
            pres=max(0ll,pres);
            ans+=pres;
        }
        cout<<ans<<endl;
    
}

int main()
{
    // solve1();
    solve2();
    return 0;
}