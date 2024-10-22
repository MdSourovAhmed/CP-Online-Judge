#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int GCD(int a,int b)
{
	if(!b)return a;
	return GCD(b,(a%b));
}
int main()
{
	int n;
	while(cin>>n)
	{
		if(!n)return 0;
		int ans=0;
		for(int i=1;i<n;++i)
		{
			for(int j=i+1;j<=n;++j)
				ans+=GCD(i,j);
		}
		cout<<ans<<endl;
	}
	return 0;
}