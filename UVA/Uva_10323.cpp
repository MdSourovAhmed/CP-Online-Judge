#include<bits/stdc++.h>
using namespace std;

long long fact(int n)
{
	if(n==0)return 1;
	return n*fact(n-1);
}

int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		cin.ignore();
		int a=n;
		long long ans;
		
		if(n<0 && n%2==0)
            printf("Underflow!\n");
        else if(n<0 && n%2!=0)
            printf("Overflow!\n");
        else if(n==0 || n<=7)
            printf("Underflow!\n");
        else if(n>13)
            printf("Overflow!\n");
        else if(n>=8 && n<=13)
        {
		long long ans=fact(n);
		cout<<ans<<endl;
        }
	}
	return 0;
}