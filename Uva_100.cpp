#include<stdio.h>
typedef long long ll;
int main()
{
	ll a,b;
	while(scanf("%lld%lld",&a,&b)!=EOF)
	{
		ll x=a,y=b;
		if(a>b){a=a^b;b=a^b;a=a^b;}
		ll s=0;
		for(ll i=a;i<=b;++i)
		{
			ll j=i,c=1;
			// s=0;
			while(j!=1)
			{
				if(j&1)
					j=3*j+1;
				else
					j=j/2;
				c++;
			}
			if(s<c)s=c;
		}
		printf("%lld %lld %lld\n",x,y,s);
	}
	return 0;
}