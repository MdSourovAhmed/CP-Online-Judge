#include <bits/stdc++.h>
using namespace std;
int main()
{
    int c;
    cin >> c;
    while (c--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int p, q, r, s;
        cin >> p >> q >> r >> s;
        int X = max(a, p);
        int x = min(c, r);
        int Y = max(b, q);
        int y = min(d, s);

        if (x > X && y > Y)
            cout << X << ' ' << Y << ' ' << x << ' ' << y << endl;
        else
            cout << "No Overlap\n";
        if (c)
            cout << endl;
    }
}
