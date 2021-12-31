#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int n;
	while(1)
	{
		cin>>n;
		// cin.ignore();
		if(!n)return 0;
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
		int f=0,l=v.size()-1;
		while(l>f)
		{
			swap(v[l],v[f]);
			l--;f++;
		}
		for(int &i:v)
			h[i]++;
		cout<<n<<"! --\n";
		// for(int i=1;i<=10;++i)
		// {
		// 	printf("    ");
  //           printf("(%d)%5d", i-1, h[i-1]);
		// 	if(i%5==0)cout<<endl;
		// 	// cout<<"("<<i<<") "<<h[i]<<endl;
		// }
		for(int i = 0; i < 5; i++) {
            if(i)
                printf("    ");
            else
                printf("   ");
            printf("(%d)%5d", i, h[i]);
        }
        puts("");
        for(int i = 5; i < 10; i++) {
            if(i != 5)
                printf("    ");
            else
                printf("   ");
            printf("(%d)%5d", i, h[i]);
        }
        puts("");
	}
	return 0;
}