#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int v[n];
    for(int i=0;i<n;++i)
    scanf("%d",&v[i]);
    long long prev=v[0],ans=0;
    for(int i=1;i<n;++i)
    {
        if(v[i]<prev){ans+=abs(v[i]-prev);prev=v[i]+abs(v[i]-prev);}
        else prev=v[i];
    }
    printf("%lld\n",ans);
}