#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int n,i=1;
	cin>>n;
	while(n--)
	{
		int len;cin>>len;
		vector<int>v(len);
		for(int j=0;j<len;++j)
			cin>>v[j];
		int h=0,l=0;
		for(int j=1;j<len;++j)
		{
			if(v[j-1]>v[j])l++;
			else if(v[j-1]<v[j])h++;
		}
		printf("Case %d: %d %d\n",i,h,l);
		i++;
	}
	return 0;
}