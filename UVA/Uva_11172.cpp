#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int a,b;
		cin>>a>>b;
		if(a-b>0)cout<<">\n";
		else if(a-b<0)cout<<"<\n";
		else cout<<"=\n";
	}
	return 0;
}