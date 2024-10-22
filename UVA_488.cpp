#include <bits/stdc++.h>
using namespace std;

bool fl = true;

void fun(int a, int b)
{
    if (fl)
        b++;
    if (!b)
        return;
    if (!fl)
        b--;
    for (int i = 1; i <= b; ++i)
        cout << b;
    cout << endl;
     if (b == a)
        fl = false;
    fun(a, b);
}

int main()
{
    int a, b;
    cin >> a >> b;
    for (int i = 0; i < b; ++i)
    {
        fun(a, 0);
        fl=true;
        cout<<endl;
    }
}