#include <stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        int d = b - a, rt = sqrt(d), st = rt;
        d -= rt * (rt + 1) / 2;
        while (d)
        {
            while (rt * (rt + 1) / 2 > d)
                rt--;
            if (rt * (rt + 1) / 2 == d)
            {
                d = 0;
                st += rt;
            }
            else
            {
                d -= rt;
                st++;
            }
        }
        printf("%d\n", st);
    }
}

// https://vjudge.net/problem/UVA-846