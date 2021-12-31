#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll Pow(ll &b,ll p,ll &m)
{
	if(p==0)return 1;
	ll ans=Pow(b,p/2,m);
	if(p&1)return (b*((ans*ans)%m))%m;
	else return (ans*ans)%m;
}

int main()
{
	ll b,p,m;
	while(cin>>b>>p>>m)
	{
		ll ans=Pow(b,p,m);
		cout<<ans<<endl;
	}
	return 0;
}