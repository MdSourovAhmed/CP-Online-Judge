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
const ll N = 1e5 + 7;
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

// bitset<N> bts;
// vector<int> p;

// void seive()
// {
//     bts.set();
//     bts[0] = bts[1] = 0;
//     for (int i = 2; i * i <= N; ++i)
//     {
//         if (bts[i])
//         {
//             p.push_back(i);
//             for (int j = i * i; j < N; j += i)
//                 bts[j] = 0;
//         }
//     }
// }

// void seg_seve(int f, int e)
// {
//     int sz = e - f + 1;
//     int v[sz];
//     memset(v, 1, sizeof(v));
//     if (f == 1)
//         f++;
//     for (int i = 0; p[i] * p[i] <= e; i++)
//     {
//         int c_p = p[i];
//         int l = (f / c_p) * c_p;

//         if (l < f)
//             l += c_p;
//         for (int j = l; j <= e; j += c_p)
//             v[j - f] = 0;

//         if (l == c_p)
//             v[l - f] = 1;
//     }

//     for (int i = 0; i < sz; ++i)
//         if (v[i])
//             cout << i + f << endl;
// }

int main()
{
    // seive();
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if(a==1)a++;
        if(a<=2)cout<<2<<endl;
        if (a % 2 == 0)
            a++;
        for (; a <= b; a += 2)
        {
            int f = 1;
            for (int i = 2;i*i<= a; ++i)
            {
                if (a % i == 0)
                {
                    f = 0;
                    break;
                }
            }
            if (f)
                cout << a << endl;
        }
        cout << endl;
    }
}