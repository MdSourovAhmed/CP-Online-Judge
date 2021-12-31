// #include <bits/stdc++.h>
#include <stdio.h>
// using namespace std;
int main()
{
	int n;scanf("%d",&n);
	while(n--)
	{
		int a,b;
		scanf("%d%d",&a,&b);
		if(b%a)printf("-1\n");
		else printf("%d %d\n",a,b);
	}
	return 0;
}