#include<bits/stdc++.h>
using namespace std;
unordered_map<int,double>um={{'C',12.01},{'H',1.008},{'O',16.00},{'N',14.01}};
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		map<char,int> m;
		string s;
		cin>>s;
		double ans=0;
		for(int i=0;i<s.size();)
		{		
			int v=0,j=i;

		    	i++;
			  // int v=0,j=i-1;
			  while(s[i]>='0'&&s[i]<='9')
			  {
			  	v=v*10+(s[i]-'0');
			  	i++;
			  }
			  if(v==0)v=1;
			  ans+=(um[s[j]]*v);	
		
		}

		printf("%0.3lf\n",ans );
	}
	return 0;
}

