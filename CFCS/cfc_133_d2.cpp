// https://codeforces.com/contest/1716/problem
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve1()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n ;
        cout <<((n==1)?2:(n+2)/3)<< endl;
    }
}


void solve2()
{
     int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n ;
        cout<<n<<endl;
        vector<int>v(n);
        int i=0;
        for(auto &a:v)a=++i;
        for( i=0;i<n;++i)
        {
            for(int j=0;j<n;++j)
            cout<<v[j]<<" ";
            cout<<endl;
            v[i]=v[i]^v[n-1];
            v[n-1]=v[i]^v[n-1];
            v[i]=v[i]^v[n-1];
        }
        // cout<<endl;
    }
}

int main()
{
    // solve1();
    solve2();
    return 0;
}