#include<bits/stdc++.h>
using namespace std;
int main()
{
	char h='H',u='U',s[6];
	int i,j=0;
	while(cin>>i)
	{
		if(i<0)return 0;
		printf("Case %d: ",++j);
		int s=1,c=0;
		while(s<i)
		{
			s+=s;
			c++;
		}
		cout<<c<<endl;
	}
	return 0;
}