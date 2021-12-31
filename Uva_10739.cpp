#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		 string s;
		 cin>>s;
		 int len=s.size();
		 int r,l,ans=0;
		 if(len&1){r=len/2;l=len/2;l--;}
		 else{l=len/2;r=l;l--;}
		 while(r<len&&l>=0)
		 {
		 	if(s[r]!=s[l])ans++;r++;l--;
		 }
		 cout<<ans<<endl;
	}
}