#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, t = 0;
    while (scanf("%d%d%d", &a, &b, &c) && (a + b + c))
    {
        vector<int> A(a), B(b);
        for (int i = 0; i < a; ++i)
            cin >> A[i];
        for (int i = 0; i < b; ++i)
            cin >> B[i];

        vector<bool> C(a, false);
        int cur=0, mx_cur = INT_MIN;
        printf("Sequence %d\n", ++t);
        for (int i = 0; i < b; ++i)
        {
            int pos = B[i] - 1;
            C[pos] = !C[pos];
            cur += (C[pos] ? 1 : -1) * A[pos];
            mx_cur = max(mx_cur, cur);
        }

        if (mx_cur > c)
            cout << "Fuse was blown.\n";
        else
            cout << "Fuse was not blown.\nMaximal power consumption was " << mx_cur << " amperes.\n";
        cout<<endl;    
    }
}