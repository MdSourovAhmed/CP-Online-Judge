#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,char>m={{1,'C'},{6,'C'},{2,'B'},{5,'B'},{3,'A'},{4,'A'}};
    int a,b,c;
    while(cin>>a>>b>>c)
    {
        int n=c+(b<<1)+(a<<2);
        if(m[n])cout<<m[n]<<endl;
        else cout<<"*\n";
    }
}