#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N=1e5+1;
vector<ll>v(N,0);
int main()
{
	for(ll i=1;i*i<=N;++i)
		v[i*i]=1;
	for(ll i=1;i<N;++i)
		v[i]+=v[i-1];
	ll a,b;
	cout<<"hhgjv";
	// while(cin>>a>>b)
	// {
	// 	if(!a&&!b)return 0;
	// 	cout<<v[b]-v[a-1]<<endl;
	// }
	return 0;
}