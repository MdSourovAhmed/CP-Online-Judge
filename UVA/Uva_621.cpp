#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	cin.ignore();
	while(n--)
	{
		string s;
		cin>>s;
		int i=s.size();
		if(s[i-1]=='5')printf("-\n");
		else if(s[0]=='9'&&s[i-1]=='4')printf("*\n");
		else if(s[0]=='1'&&i>=3)printf("?\n");
		else printf("+\n");
	}
	return 0;
}