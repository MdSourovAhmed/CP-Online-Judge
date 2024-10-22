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
    ll v[4] = {0};
    int n;
    cin >> n;
    string s;
    cin >> s;
    ll x;
    for (int i = 0; i < n; ++i)
    {
        cin >> x;
        if (s[i] == 'h')
            v[0] += x;
        else if (s[i] == 'a')                //hard
            v[1] = min(v[0], v[1] + x);      //hajgorbd hhard whrd
        else if (s[i] == 'r')                //for each hard we'll find minimum ambiguity to cut off
            v[2] = min(v[1], v[2] + x);
        else if (s[i] == 'd')
            v[3] = min(v[2], v[3] + x);
    }

    cout << v[3] << endl;
}