#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll rev(ll a)
{
	ll r=0;
	while(a)
	{
		r=r*10+(a%10);
		a/=10;
	}
	return r;
}

int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		ll a,ans=-7;
		cin>>a;
		ll i=1;
		ans=rev(a);
		a+=ans;
		while(1)
		{
			ans=rev(a);
			if(ans==a)break;
			if(i==1000)return 0;
			a+=ans;
			// cout<<a<<" ";
			i++;
		}
		cout<<i<<" "<<a<<endl;
	}
	return 0;
}