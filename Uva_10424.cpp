#include <bits/stdc++.h>
using namespace std;

int fun(int &n)
{
    int r = 0;
    while (n)
    {
        r += n % 10;
        n /= 10;
    }
    return r;
}

int fun1(string &s)
{
    int digit = 0;
    for (char c : s)
    {
        if (c >= 'A' && c <= 'Z')
            digit += c - 'A' + 1;
        if (c >= 'a' && c <= 'z')
            digit += c - 'a' + 1;
    }
    while (digit / 10)
        digit = fun(digit);
    return digit;
}

int main()
{
    string s, ss;
    while (getline(cin,s))
    {
        getline(cin,ss);
        int d1, d2;
        d1 = fun1(s);
        d2 = fun1(ss);
        if(d2<d1)swap(d1,d2);
        printf("%0.2lf %\n",(double)(d1*100.0/d2));
    }
}

// saima
// shanto
// Pakistan
// India
// USA
// USSR