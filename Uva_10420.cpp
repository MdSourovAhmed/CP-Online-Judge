#include<bits/stdc++.h>
using namespace std;

int main()
{
	map<string,int>m;
	int n;
	cin>>n;
	while(n--)
	{
		string s;
		cin>>s;
		m[s]++;
		string n;
		getline(cin,n);
	}
	for(auto a: m)
	{
		cout<<a.first<<" "<<a.second<<endl;
	}
	return 0;
}