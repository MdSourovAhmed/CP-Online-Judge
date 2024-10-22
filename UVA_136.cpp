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

bool fun(ll n)
{
    while (n % 2 == 0)
        n >>= 1;
    while (n % 3 == 0)
        n /= 3;
    while (n % 5 == 0)
        n /= 5;
    return n == 1;
}

int main()
{
    // int c=1;
    // int i = 2;
    // // v.push_back(1);
    // while (c != 1500)
    // {
    //     if (fun(i))
    //     c++;
    //         // v.push_back(i);
    //         i++;
    // }
    // cout << i-1 << endl;

    printf("The 1500'th ugly number is %d.\n",859963392);
}