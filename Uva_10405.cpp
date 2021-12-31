#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s,s1;
	while(cin>>s>>s1)
	{
		vector<int>v(128,0);
		int ans=0;
		for(auto a: s)
			v[a]=1;
		for(auto a:s1)
			if(v[a])
				ans++;
		cout<<ans<<endl;	
	}
	return 0;
}