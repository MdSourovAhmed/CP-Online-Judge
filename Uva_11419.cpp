#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    while ((cin >> a >> b) && a && b)
    {
        string s;
        char c[a + 1];
        cin >> s;
        int j = 0;
        for (int i = 0; i < a; ++i)
        {
            while (j && b && c[j] < s[i])
            {
                j--;
                b--;
            }
            c[++j] = s[i];
        }
        for (int i = 1; i <= j - b; ++i)
            cout << c[i];
        cout << endl;
    }
}