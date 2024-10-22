#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll Gcd(ll a,ll b)
{
	if(!b)return a;
	return Gcd(b,a%b);
}
int main()
{
	ll n[1001];
	while(cin>>n[0])
	{
		if(n[0]==0)return 0;
		int i=1,ans=0;;
		while(1)
		{
			cin>>n[i];
			if(!n[i])break;
			i++;
		}
		for(int j=1;j<i;++j)
		{
			ans=Gcd(ans,abs(n[j]-n[j-1]));
		}
		cout<<ans<<endl;
	}
	return 0;
}