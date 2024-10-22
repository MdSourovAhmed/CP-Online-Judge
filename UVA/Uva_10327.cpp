#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
int n;
while(scanf("%d",&n)!=EOF)
{
      vector<int>v(n);
      for(int i=0;i<n;++i)
      {
            cin>>v[i];
      }
      int ans=0;
      for(int i=0;i<n;++i)
      {
            ans=0;
            for(int j=0;j<i;++j)
            {
                  if(v[i]<v[j])
                  {
                        swap(v[i],v[j]);
                        ans++;
                  }
            }
      }
      printf("Minimum exchange operations : %d\n",ans);
}
return 0;
}

           