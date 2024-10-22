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
int main()
{
    int t;
    cin >> t;
    int i = 0;
    while (t--)
    {
        int W, n;
        cin >> W >> n;
        int ans = 0, s_w = 0;
        int w, d;
        while (n--)
        {
            cin >> w >> d;
            if (s_w + w > W)
            {
                ans += 2 * d;
                s_w = w;
            }
            else if (w + s_w == W)
            {
                ans += 2 * d;
                s_w = 0;
            }
            else
                s_w +=w;
        }
        if (s_w)
            ans += 2*d;
        printf("%d\n", ans);
    }
}