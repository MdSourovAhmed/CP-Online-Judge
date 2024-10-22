

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
typedef long long int ll;
const ll N = 1e6 ;
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
    for (ll i = 2; i<= N; ++i)
    {
        if (bts[i])
        {
            p.push_back(i *1ll* i);
            for (ll j = i * 1ll * i; j < N; j += i)
                bts[j] = 0;
        }
    }
}

int main()
{
    seive();
    ll n;
    cin >> n;
    // cout<<n;
    while (n--)
    {
        ll a;
        cin >> a;
        // int l = 0, r = p.size() - 1, m;
        bool ans = false;
        ans = binary_search(p.begin(), p.end(), a);
        // while (r > l)
        // {
        //     m = (l + r) / 2;
        //     if (p[m] == a)
        //     {
        //         ans = 1;
        //         break;
        //     }
        //     else if (p[m] > a)
        //         r = m - 1;
        //     else
        //         l = m + 1;
        // }
        if (ans)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    // for(ll a:p)
    // cout<<a<<" ";
    // cout<<"dfj";

    return 0;
}