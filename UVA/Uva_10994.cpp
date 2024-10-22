#include<bits/stdc++.h>
using namespace std;

int rec(int n)
{
	if(n==0)return 0;
	if(n%10>0);
	return rec(n/10);
}

int main()
{
	while(true)
	{
		long long a,b;
		cin>>a>>b;
		if(a+b<=-2)return 0;
		long long ans=0;
		for(long long i=a;i<=b;++i)
		{
			long long j=i;
			rec(j);
			cout<<endl;
		}
	}
	return 0;
}