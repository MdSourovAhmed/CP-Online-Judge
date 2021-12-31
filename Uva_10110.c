#include<stdio.h>
#include<math.h>
int main()
{
	while(1)
	{
		long long n;
		scanf("%lld",&n);
		if(!n)return 0;
		long long d=sqrt(n);
		if((d*d)==n)printf("yes\n");
		else printf("no\n");
	}
	return 0;
}