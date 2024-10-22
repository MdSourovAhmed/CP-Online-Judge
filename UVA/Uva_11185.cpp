#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// ll tenary(ll n)
// {
// 	ll r,t=0;
// 	while(n)
// 	{
// 		r=n%3;
// 		t=(t*10)+r;
// 		// cout<<r<<" ";
// 		n/=3;
// 	}
// 	// t=t*10+n;
// 	return t;
// }

// void rev(ll &n)
// {
// 	ll r=0;
// 	while(n)
// 	{
// 		r=(r*10)+(n%10);
// 		n/=10;
// 	}
// 	n=r;
// }

void tenary(ll n,ll &ans)
{
	if(n==0)return;
	tenary(n/3,ans);
	ans=(ans*10)+n%3;
}

int main()
{
	while(true)
	{
		ll ans=0;
		ll n;
		cin>>n;
		if(n<0)return 0;
		if(n==0){cout<<ans<<endl; continue;}
		tenary(n,ans);
		cout<<ans<<endl;
	}
	return 0;
}