#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
ll n;
while(scanf("%lld",&n)!=EOF)
{
      if(!(n&1)){cout<<0<<endl;continue;}
      ll l=(n+1)/2;
      ll last_d=(l*l*2)-1;
      ll ans=3*last_d-6;
      cout<<ans<<endl;
}
return 0;
}

           