#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
long double esp=1e-9;
int main(){
	ll n;
	int a;
	cin>>a;
	while(a--)
	{
		cin>>n;
		long double x=1,y=(double)(n),m;
		while(y-x>esp)
		{
			m=(x+y)/2;
			if(m*m>n)y=m;
			else x=m;
		}
		ll ans=(ll)(y);
		cout<<(ans)<<endl;
	}
	return 0;
}