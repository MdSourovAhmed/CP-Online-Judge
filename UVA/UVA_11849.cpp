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
    int a, b;
    while (cin >> a >> b)
    {
        if (!a && !b)
            return 0;
        vector<int> v1(a), v2(b);
        for (int &x : v1)
            cin >> x;
        for (int &x : v2)
            cin >> x;
        int cnt = 0;

        for (int i = 0, j = 0;;)
        {
            if (i == v1.size() || j == v2.size())
                break;
            if (v1[i] == v2[j])
            {
                cnt++;
                i++;
                j++;
            }
            else if (v1[i] > v2[j])
                j++;
            else
                i++;
        }

        cout << cnt << endl;
    }
}