#include<stdio.h>
using namespace std;

int main()
{
	int i=0,n;
	scanf("%d",&n);
	while(n--)
	{
		int a;
		scanf("%d",&a);
		printf("Case #%d: %d\n",++i,2*a-1);
	}	
	return 0;
}