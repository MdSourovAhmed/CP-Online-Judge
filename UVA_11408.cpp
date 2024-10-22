#include <iostream>
#include<cmath>
#include<vector>
#include<bitset>
using namespace std;
#define N 5000000
vector<int>ans(N+1);
bitset<N+1>p;

int main()
{
	int a,b;
	vector<int>P;
	p.set();
    p[0]=p[1]=0;

	for (int i = 2; i<=N; i++)
	{
		if (p[i])
		{
			ans[i]=i;
			for (int j = i+i; j <= N; j += i)
			{
				p[j]=0;
				ans[j]+=i;
			}
		}
		if(p[ans[i]])P.push_back(i);
	}


	while (scanf("%d %d", &a, &b) == 2)
	{

		int lo = lower_bound(P.begin(), P.end(), a) - P.begin();
        int hi = lower_bound(P.begin(), P.end(), b) - P.begin();

		// cout <<P[lo]<<" "<< P[hi] << endl;

		if( hi ==(int)P.size() || P[hi] != b ) printf("%d\n", hi - lo);
        else
        printf("%d\n", hi - lo + 1);
	}

}

