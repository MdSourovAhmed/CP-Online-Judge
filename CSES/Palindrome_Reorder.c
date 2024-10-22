#include <stdio.h>
#include <string.h>
const int N = 1e6 + 7;
int v[27];

int main()
{
    char s[N];
    scanf("%s", s);

    int l = strlen(s);
    for (int i = 0; i < l; ++i)
        v[s[i] - 'A']++;

    int odd_cnt = 0, chr;
    for (int i = 0; i < 26; ++i)
        if (v[i] & 1)
        {
            odd_cnt++;
            chr = i;
        }
    if (odd_cnt > 1)
    {
        puts("NO SOLUTION");
        return 0;
    }
    char ans[l];
    int m, lf, rt;
    if (l & 1)
    {
        m = l / 2;
        lf = m - 1;
        rt = m + 1;
        ans[m] = chr + 'A';
        v[chr]--;
    }
    else
    {
        rt = l / 2;
        lf = rt - 1;
    }

    for (int i = 0; i < l; ++i)
    {
        if (v[s[i]-'A'])
        {
            ans[lf] = ans[rt] = s[i];
            v[s[i]-'A'] -= 2;
            lf--;rt++;
        }
    }
    
    ans[l] = '\0';
    printf("%s\n", ans);
}