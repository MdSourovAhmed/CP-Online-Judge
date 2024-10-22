#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r, a, b, c, d, dx, dy;
    cin >> r >> a >> b >> c >> d;
    dx = a - c;
    dy = b - d;
    double dis = sqrt(dx * 1ll * dx + dy * 1ll * dy);
    cout << (long long) ceil(dis / (2 * r)) << endl; // we devide by 2r because a center will
                                         //  cover r area obout each sides. hence, its dis/2r
}