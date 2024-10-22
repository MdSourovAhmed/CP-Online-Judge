#include<stdio.h>
#include<math.h>
typedef long long ll;

int main()
{
    int n;
    scanf("%d",&n);
    int g[n];
    for(int i=0;i<n;++i)
    g[i]=0;
    int N=1<<n;
    for(int i=1;i<=N;++i)
    {
        int pre=g[0];
        printf("%d",g[0]);
        for(int i=1;i<n;++i)
        {
            if(g[i]^pre)
            {
                pre=g[i];
                g[i]=0;
            }
            else
            {
                pre=g[i];
                g[i]=1;
            }
            printf("%d",g[i]);
        }
        printf("\n");
    }

}