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
const ll N = 1e6 + 1;
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

ll Pow(int a, int b)
{
    ll ans = 1;
    while (b)
    {
        if (b & 1)
            ans *= (a) % MOD;
        a *= a;
        ans %= MOD;
        b >>= 1;
    }
    return ans;
}

int fct[N], inv_fct[N];
void fact()
{
    fct[0] = inv_fct[0] = 1;
    for (int i = 1; i < N; ++i)
    {
        fct[i] = (i * fct[i - 1]) % MOD;
        inv_fct[i] = (Pow(fct[i], MOD - 2));
    }
}

int main()
{
    // cout<<Pow(5,3)<<endl;
    fact();
    // cout << fct[5] << " " << Pow(fct[9], MOD - 2);
    string s;
    cin >> s;
    vector<vector<int>> fr(s.size() + 1, vector<int>(26, 0));
    for (int i = 0; i < s.size(); ++i)
    {
        fr[i + 1] = fr[i];
        fr[i + 1][s[i] - 'a']++;
    }
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        vector<int> frq_rng(26, 0);
        for (int i = 0; i < 26; ++i)
            frq_rng[i] = (fr[r + 1][i] - fr[l][i]);
        int od_cnt = 0;
        int all_sum = 0;
        ll inv_mul = 1;
        for (int i : frq_rng)
        {
            // cout << i << " ";
            all_sum += i / 2;
            od_cnt += (i & 1);
            inv_mul = (inv_mul * fct[i / 2]) % MOD;
        }
        ll ans = (fct[all_sum] * inv_fct[inv_mul]) % MOD;
        ans = (ans * max(1, od_cnt)) % MOD;
        cout << ans << endl;
    }
    // cout << Pow(2, 3);
}