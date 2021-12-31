#include<stdio.h>
int main()
{
	long long n;
	while(scanf("%lld",&n)!=EOF)
	{
		long long ans=n*n;
		n++;
		ans=ans*n*n/4;
		printf("%lld\n",ans);
	}
	return 0;
}