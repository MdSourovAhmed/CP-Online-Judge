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
int main()
{
    int n;
    while (cin >> n && n)
    {
        vector<int> v1(n), v2(n);
        map<int, int> m;
        for (int i = 0; i < n; ++i)
        {
            cin >> v1[i] >> v2[i];
            m[v1[i]] = v2[i];
        }

        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());

        if (v1 == v2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}