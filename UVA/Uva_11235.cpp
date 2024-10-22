#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll n;
	while(scanf("%d",&n)!=EOF)
	{
		if(!n)return 0;
		int q;cin>>q;
		vector<ll>v(n);
		for(int i=0;i<n;++i)
		{
			cin>>v[i];
		}
		while(q--)
		{
			ll a,b;
			map<ll,ll>m;
			cin>>a>>b;
			for(ll i=a-1;i<b;++i)
			{
				m[v[i]]++;
			}
			ll max=INT_MIN;
			for(auto o:m)
			{
				if(o.second>max)max=o.second;
			}
			cout<<max<<endl;
		}
	}
	return 0;
}