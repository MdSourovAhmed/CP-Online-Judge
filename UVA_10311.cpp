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
const int N = 1e9 + 9;
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

bool p[N];
void seive()
{
    p[0] = p[1] = 1;
    p[2] = 0;
    for (int i = 3; i * i <= N; i += 2)
    {
        if (!p[i])
            for (int j = i * i; j <= N; j += (2 * i))
                p[j] = 1;
    }
}

int main()
{
    seive();
    int n;
    while (cin >> n)
    {
        bool y = false;
        if (n & 1)
        {
            int a = n - 2;
            if (a > 2 && !p[a])
                pf("%d is the sum of %d and %d.\n", n, 2, a);
            else
                pf("%d is not the sum of two primes!\n", n);
        }
        else
        {
            for (int i = n / 2 + 1; i < N; i++)
            {
                if (!p[i] && !p[n - i] && ((n - i) % 2 != 0))
                {
                    pf("%d is the sum of %d and %d.\n", n, n - i, i);
                    y = true;
                    break;
                }
            }
            if (!y)
                pf("%d is not the sum of two primes!\n", n);
        }
    }
}