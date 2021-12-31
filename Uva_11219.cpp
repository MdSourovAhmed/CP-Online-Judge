#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i=0;
	cin>>n;
		cin.ignore();
	while(n--)
	{
		int a,b,c,d,e,f;
		scanf("%d/%d/%d",&a,&b,&c);
		scanf("%d/%d/%d",&d,&e,&f);
		double ans=(c-f)*365+(b-e)*30+(a-d);
		ans/=365;
		printf("Case #%d: ",++i);
		if(ans<0)
		{
			cout<<"Invalid birth date\n";
			continue;
		}
		if(int(ans)>130)
		{
			cout<<"Check birth date\n";
			continue;
		}
		else
				cout<<int(ans)<<endl;
	}
	return 0;
}