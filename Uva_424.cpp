#include<bits/stdc++.h>
using namespace std;

void rev(int f, int l, string &s )
{
	if(f!=0)f++;
	l--;
	while(l>f)
	{
		auto c=s[f];
		s[f]=s[l];
		s[l]=c;
		f++;l--;
	}
}

int main()
{
	string s;
	cin.ignore();
	while(getline(cin,s))
	{
		// cin.ignore();
		// cout<<s;
		vector<int>v(s.size(),0);
		int i=1;
		for(int j=0;j<s.size();++j)
		{
			if(s[j]==' '){
				v[i]=j;
				i++;
			}
		}
		v[i]=s.size();
		for(int a=1;a<=i;++a)
			{
				rev(v[a-1],v[a],s);
			}
		cout<<s<<endl;	
	}
	return 0;
}