#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

long long ans[1001][1001];

void Pascle(int n)
{
    if(!n)return;
    ans[n][0]=ans[n][n]=1;
    Pascle(n-1);
    for(int i=1;i<n;++i)
    ans[n][i]=(ans[n-1][i-1])+(ans[n-1][i]);
}

int main()
{
    Pascle(1000);
    int a, b;
    while (cin >> a >> b)
    {
        if(!a&&!b)return 0;
        int i = a, j = b;
        printf("%d things taken %d at a time is %lld exactly.\n",a,b,ans[a][b]);
    }
}