#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int n;
	while(cin>>n)
	{
		// if(!n)return 0;
		vector<int>v={1},h(10,0);
		for(int i=2;i<=n;++i)
		{
			int cary=0;
			for(int j=0;j<v.size();++j)
			{
				int val=v[j]*i+cary;
				v[j]=val%10;
				cary=val/10;
			}
			while(cary)
			{
				v.push_back(cary%10);
				cary/=10;
			}
		}
        int c=0,ans=0;
        for(auto i: v)
        {if(i){c++;}
        if (c>=1&&i==0)break;
        if(c==2)break;
        ans=ans*10+i;
        }
        printf("%5d -> %d\n",n,ans);
	}
	return 0;
}