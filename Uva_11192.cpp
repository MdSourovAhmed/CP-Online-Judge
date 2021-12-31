#include <bits/stdc++.h>
using namespace std;

void rev(char *s,int i,int n)
{
	// if(n>=s.size())return;
	int f=i,l=n-1;
	while(l>f)
	{
		char c=s[f];
		s[f]=s[l];
		s[l]=c;
		f++;
		l--;
	}
	// rev(s,2*n,n);
}

int main()
{
	int n;
	while(true)
	{
		cin>>n;
		if(!n)return 0;
		char s[101];
		cin.ignore();
		cin>>s;
		int l=strlen(s);
		// cin.ignore();
		for(int i=0;i<l;i+=(l/n))
		rev(s,i,i+(l/n));
		cout<<s<<endl;
	}
	return 0;
}