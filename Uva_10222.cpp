#include <bits/stdc++.h>
using namespace std;
char *c="qwertyuiop[]asdfghjkl;zxcvbnm,.";
int main()
{
	map<char,int>m;
	for (int i = 0; i < 30; ++i)
	{
		m[c[i]]=i+1;
	}
	// for(auto a: m)
	// 	cout<<a.first<<" "<<a.second;
	string s;
	getline(cin,s);
	cout<<s;
	for(int i=0;i<s.size();++i)
	{
		if(m.find(s[i])!=m.end())
		s[i]=m[m[s[i]]-2];
	}
	cout<<s<<endl;
}