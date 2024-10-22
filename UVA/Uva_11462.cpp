#include<bits/stdc++.h>
using namespace std;
int main()
{
	long n;
	while(cin>>n)
	{
		if(!n)return 0;
		vector<long>v(n);
		for(long i=0;i<n;++i)
			cin>>v[i];
		sort(v.begin(),v.end());
		cout<<v[0];
		for(long i=1;i<n;++i)
			cout<<" "<<v[i];
		cout<<endl;
	}
	return 0;
}