#include <bits/stdc++.h>
using namespace std;
// typedef long long ll;
int main()
{
	int n=1;
	int a[10001];
	while(cin>>n)
	{
		if(n==1)cout<<1<<endl;
		else if(n&1)cout<<1+((n/2)-1)<<endl;
		else if(!(n&1)){
			int p=n/2;
			int ans=(2+(p-1)+p)/2;
			cout<<ans<<endl;
		}
		// sort(a,a+n+1);
		// int p;
		// if(!(n&1))p=((n/2)+((n/2)+1))/2;
		// else p=(n/2)+1;
		// int ans=a[p];
		// if(n==1)ans=a[1];
		// cout<<ans<<endl;
		// // n++;
	}
	return 0;
}