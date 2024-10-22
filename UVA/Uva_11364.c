#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int l,max=-7,min=10000000+7;
		scanf("%d",&l);
		int a[l];
		for(int i=0;i<l;++i)
		{
			scanf("%d",&a[i]);
			if(min>a[i])min=a[i];
			if(max<a[i])max=a[i];
		}
		printf("%d\n",(max-min)*2);
	}
	return 0;
}