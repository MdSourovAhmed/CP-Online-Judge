#include <bits/stdc++.h>
using namespace std;
const int N=1e7+9;
vector<bool>P(N,1);

void seve()
{
	P[0]=0;
	for(int i=2;i<=N;++i)
	{
		if(P[i])
		{
			for(int j=i*2;j<=N;j+=i)
			{
				P[j]=0;
			}
		}
	}
	// cout<<"rh";
}

int main()
{
	seve();
	string s;
	while(cin>>s)
	{
		int ans=0;
		for(int i=0;s[i]!='\0';++i)
		{
			if(s[i]>='a'&&s[i]<='z')
				ans+=s[i]-'a'+1;
			else if(s[i]>='A'&&s[i]<='Z')
				ans+=s[i]-'A'+27;
		}
		// cout<<ans;
		if(P[ans])
			cout<<"It is a prime word."<<endl;
		else
			cout<<"It is not a prime word."<<endl;}
	return 0;
}