#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		vector<int>v(n);
		vector<bool>b(n-1,0);
		int max=n-1;
		for(int i=0;i<n;++i)
		{
			cin>>v[i];
		}
		for(int i=1;i<n;++i)
		{
			int t=abs(v[i]-v[i-1]);
			if(t<=max)
			b[t]=true;
		}
		bool ans=true;
		for(int i=1;i<=max;++i)
		{
			if(!b[i]){
				ans=false;
				break;
			}
		}
		if(ans)
		   cout<<"Jolly\n";
	    else
		   cout<<"Not jolly\n";
			
	}
	return 0;
}