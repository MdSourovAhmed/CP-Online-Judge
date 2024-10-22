#include<bits/stdc++.h>
using namespace std;

int main()
{
	char h='H',u='U',s[6];
	int i=0;
	while(cin>>s)
	{
		if(s[0]=='*')return 0;
		printf("Case %d: Hajj-e-",++i);
		if(s[0]==h)cout<<"Akbar\n";
		else if(s[0]==u)cout<<"Asghar\n";
	}
	return 0;
}