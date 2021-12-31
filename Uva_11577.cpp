#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	cin.ignore();
	while(n--)
	{
		
		vector<int> v(26,0);
		string s;
		getline(cin,s);
		int l=s.size();
		for(int i=0;i<l;++i)
		{
			if(s[i]>='A'&&s[i]<='Z')v[s[i]-'A']++;
			if(s[i]>='a'&&s[i]<='z')
				v[s[i]-'a']++;
        }
		int max=0;
		for(int i=0;i<26;++i)
		{
			if(v[i]>max)max=v[i];
			// cout<<v[i]<<" ";
		}
		for (int i = 0; i <26; ++i)
		{
			if(v[i]==max)
				cout<<char(i+'a');
		}
		// for(auto a:v)
		// 	cout<<a<<" ";
		cout<<endl;
	}
	return 0;
}