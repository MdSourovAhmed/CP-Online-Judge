#include<stdio.h>
int main()
{
	int n;
	while(1)
	{
		scanf("%d",&n);
		if(!n)return 0;
		int s=0;
		for(int i=0;i<n;++i)
		{
			int a;
			scanf("%d",&a);
			if(a)
			{
				if(s)printf(" ");
				printf("%d",a);
				s=7;
			}
		}
		if(!s)printf("%d",s);
		printf("\n");		
	}
	return 0;
}	