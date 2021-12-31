#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i=0;
	while(1)
	{
		int n;cin>>n;
		if(!n)return 0;
		vector<int>v(n);
		int s=0;
		for(int i=0;i<n;++i)
			{
				cin>>v[i];
				s+=v[i];
			}
			s/=n;
		int ans=0;	
		for(int i=0;i<n;++i)
		{
			ans+=abs(s-v[i]);
		}
		ans/=2;

		cout<<"Set #"<<++i<<"\nThe minimum number of moves is "<<ans<<".\n\n";
	}

	return 0;
}