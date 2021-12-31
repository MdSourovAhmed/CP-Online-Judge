#include<bits/stdc++.h>
using namespace std;
int main()
{
	char s[1000007];
	int i=0,n;
	while(cin>>s>>n)
	{
		cout<<"Case "<<++i<<":\n";
		while(n--)
		{
			int a,b;
			cin>>a>>b;
			if(a>b)swap(a,b);
			// map<char,int>v;
			int v=0;
			for (int i = a; i < b; ++i)
			{
				if(s[i]!=s[i+1])v=1;
			}
			if(v)cout<<"No\n";
			else cout<<"Yes\n";
		}
	}
	return 0;
}