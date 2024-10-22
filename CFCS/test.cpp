// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// int t;
// cin >> t;
// int c=0;
// while (t--)
// {
//     vector<pair<string, int>> vs;
//     vector<pair<int, int>> vi;
//     int n;
//     cin >> n;
//     while (n--)
//     {
//         int d, u;
//         string s;
//         cin >> s >> d >> u;
//         vs.push_back(make_pair(s, u));
//         vi.push_back(make_pair(d, u));
//     }

//     sort(vs.begin(), vs.end());
//     sort(vi.begin(), vi.end());

//     // for(auto &a:vs)
//     // cout<<a.first<<" "<<a.second<<endl;
//     // for(auto &a:vi)
//     // cout<<a.first<<" "<<a.second<<endl;
//     int cnt = 0;
//     for (int i = 0; i < vi.size(); ++i)
//         if (vs[i].second == vi[i].second)
//             cnt++;
//     printf("Case #%d: %d\n",++c,cnt);
//     // cout<<cnt<<endl;
// }

// int n,m;
// // scanf("%d%d",&n,&m);
// cin>>n>>m;
// int a[m];
// for(int i=0;i<m;++i)
// // scanf("%d",&a[i]);
// cin>>a[i];
// int ans=a[0]-1;
// for(int i=1;i<m;++i)
// {
//     if(a[i-1]>a[i])ans+=(n-a[i-1]+a[i]);
//     else ans+=a[i]-a[i-1];
// }
// // printf("%d\n",ans);
// cout<<ans<<endl;
// return 0;

// int n,d=0,a=0;
// cin>>n;
// string s;
// cin>>s;
// for(char &c:s)
// {
//  	if(c=='D')d++;
//  	if(c=='A')a++;
// }

// if(d>a)cout<<"Danik\n";
// else if(a>d)cout<<"Anton\n";
// else if(a==d) cout<<"Friendship\n";

// }

#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <deque>
#include <fstream>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include <stdio.h>
#include <bitset>
#include <stdlib.h>
typedef long long ll;
const ll N = 1e7;
const ll MOD = 1e9 + 7;
using namespace std;
typedef int in;
typedef unsigned long long ull;
const double pi = 2 * acos(0);
#define maxi 40000
#define pf printf
#define sc scanf
#define pb push_back
#define MEM(x, y) (memset((x), (y), sizeof(x)))
#define MIN(x, y) ((x) < (y) ? (x) : (y))
#define MAX(x, y) ((x) > (y) ? (x) : (y))
#define load(array, size)          \
    for (int i = 0; i < size; i++) \
        cin >> array[i];
#define n_l cout << endl
#define clear_data(array) memset(array, 0, sizeof(array))
#define highest_int 2147483647

bitset<N> bts;
vector<ll> p;

void seive()
{
    bts.set();
    bts[0] = bts[1] = 0;
    for (int i = 2; i * i <= N; ++i)
    {
        if (bts[i])
        {
            p.push_back(i * 1ll * i);
            for (int j = i * i; j < N; j += i)
                bts[j] = 0;
        }
    }
}

bool BIN_S(ll &n)
{
    int f = 0, l = p.size() - 1, m;
    while (l > f)
    {
        m = (f + l) / 2;
        if (p[m] == n)
            return 1;
        if (p[m] > n)
            l = m - 1;
        else
            f = m + 1;
    }
    return 0;
}

int main()
{
    seive();
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (binary_search(p.begin(),p.end(),n))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}