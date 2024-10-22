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
const ll M = 1e9 + 7;
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

ll Pow(ll &a, ll b)
{
    if (!b)
        return 1;
    ll P = 1;
    P = Pow(a, b / 2);
    a %= M;
    P %= M;
    if (b & 1)
        return a *= P % M * P % M;
    return a = P % M * P % M;
}
ll Inverse(ll n) { return Pow(n, M - 2); }

vector<ll> f(1000006, 1), fI(1000006, 1);
void Facto(ll n)
{
    for (int i = 1; i <= n; ++i)
    {
        f[i] = f[i - 1] % M * i % M;
        f[i] %= M;
    }

    fI[n] = Inverse(f[n]);
    for (int i = n - 1; i > 0; --i)
    {
        fI[i] = fI[i + 1] % M * (i + 1) % M;
        fI[i] %= M;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        Facto(a);
        cout<<f[a]%M*fI[b]%M*fI[a-b]%M<<endl;
        // cout << Pow(a, b);
    }
}