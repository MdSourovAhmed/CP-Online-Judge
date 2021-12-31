#include<bits/stdc++.h>
using namespace std;
void ans(int n,vector<int>&v)
{
	while(n)
	{
		v[n%10]++;
		n/=10;
	}
	// v[n]++;
}

int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int N;
		cin>>N;
		vector<int>v(10,0);
		for(int i=1;i<=N;++i)
		{
			ans(i,v);
		}
		for(int i=0;i<9;++i)
			cout<<v[i]<<" ";
		cout<<v[9]<<endl;
	}
	return 0;
}

