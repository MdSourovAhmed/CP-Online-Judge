#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a,b;
	while(cin>>a>>b)
	{
		// cin.ignore();
		int c[128]={0};
		// set<char>s;
		string s="";
		for(auto &i:a)
			c[i-'a']++;
		for(auto &i:b)
		{
			int v=c[i-'a'];
			c[i-'a']--;
			if(c[i-'a']>=0&&c[i-'a']!=v)s+=i;
		}
		// for(auto &i:s)
		// 	cout<<i;
		sort(s.begin(),s.end());
		cout<<s<<endl;
	}
	return 0;
}