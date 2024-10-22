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
const ll N = 1e7+7;
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
ll LpF[N];
short mobius[N];
int f[N]={0};
void Mobius()
{
    mobius[1] = 1;
    for (int i = 2; i < N; ++i)
    {
        if (!LpF[i])
        {
            for (int j = i; j < N; j += i)
                if (!LpF[j])
                    LpF[j] = i;
        }
        if (LpF[i / LpF[i]] == LpF[i])
            mobius[i] = 0;
        else
            mobius[i] = -1 * mobius[i / LpF[i]];
    }
}

int main()
{
    Mobius();
    int n;
    cin >> n;
    int a, mx = -1,v[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
        a=v[i];
        f[a]++;
        mx = max(mx,v[i]);
        // cout<<v[i];
    }
    // for(int i=0;i<n;++i)cout<<f[v[i]]<<endl;
    // cout<<mx;
    ll ans = 0;

    for (int i = 1; i <= mx; i++)
    {
        ll d = 0;
        for (int j = i; j <= mx; j += i)
            d += f[j];
        ans += d * (d - 1) / 2 * mobius[i];
    }
    cout << ans << endl;
}