#include <stdio.h>
typedef long long ll;

ll Min(ll a, ll b) { return a > b ? b : a; }
ll Max(ll a, ll b) { return a < b ? b : a; }

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        short sol = 0;
        for (int i = -58; i <= 58; i++)                 //a+b+c=A
        {                                               //  abc=B
            for (int j = -28; j <= 28; ++j)                 //a*a+b*b+c*c=C,,,if(a==b==c=x)x=A/3= 
            {
                if (i != j && ((i * i + j * j) + (a - i - j) * (a - i - j) == c))
                {
                    ll d = i * j;
                    if (!d)
                        continue;
                    ll k = b / d;
                    if (k != i && k != j && i + j + k == a)
                    {
                        if (!sol)
                        {
                            sol = 1;
                            ll s = a;
                            a = Min(i, Min(j, k));
                            c = Max(i, Max(j, k));
                            b = s - a - c;
                            printf("%d %d %d\n", a, b, c);
                            goto Ans;
                        }
                    }
                }
            }
        }

        if (!sol)
            printf("No solution.\n");
    Ans:;
    }
}