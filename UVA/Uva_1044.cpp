#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		long long a,b;
		cin>>a>>b;
		a/=3;
		b/=3;
		cout<<a*b<<endl;
	}
	return 0;
}