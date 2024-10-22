#include <stdio.h>
#include<math.h>
// long long int dp[70];
const int M=1e9;
// long long fib(int n)
//  {
//      if(n==0)return dp[n]=0;
//      if(n==1)return dp[1]=1;
//      if(dp[n]!=-1)return dp[n];
//      return dp[n]=fib(n-1)+fib(n-2);
//  }

// void NcR(int n, int i, int a[])
// {
//     if (i == 0||i==n)
//         a[i] = 1;
    
//     for (int k = 1; k <= (n+1)/2; ++k)
//     {
//         int m=1,d=1;
//         for (int j = 1; j <=k; ++j)
//         {
//             m*=(n + 1 - j);
//             d*=j;
//         }
//         a[k]=(m/d);
//         printf("\n");
//     }
//     for (i =(n+1)/2; i <= n; ++i)
//     a[i]=a[n-i];
//     for (i =0; i <= n; ++i)
//         printf("%d ", a[i]);
    
// }

// int* solve(int n, int* result_count) {
//     int Ncr[n+1];
//     *result_count=n+1;
//     NcR(n,0,Ncr);
//     return Ncr;
// }


// int dp[1000][1000];


// void Pascle(int n)
// {
//     if(!n)return;
//     dp[n][0]=dp[n][n]=1;
//     Pascle(n-1);
//     for(int i=1;i<n;++i)
//     dp[n][i]=((dp[n-1][i-1])%M+(dp[n-1][i])%M)%M;
// }

int main()
{
    // int n = 3;
    // int Ncr[n + 1];
    // int t ;
    // for (int i = 0; i < t; i++)
    //     Ncr[i] = 1;
    // // NcR(n, 0, Ncr);
    // Ncr=solve(n,&t);
    // for(int i=0;i<t;i++)
    // {
    //     printf("%d ",Ncr[i]);
    // }
    // fib(70);
    // int n;
    // scanf("%d",&n);
    // Pascle(n);

    // for(int i=0;i<=n;i++)
    // {
    //     printf("%d ",dp[n][i]);
    // }

    // int t,l,s1,s2;
    // scanf("%d%d%d%d",&l,&s1,&s2,&t);
    // double a;
    // while (t--)
    // {
    //     double time,ans;
    //     scanf("%lf",&a);
    //     time=(l-sqrt(a))*(sqrt(2))/abs(s1-s2);
    //     printf("%0.10lf",time);
    // }
    

    // int n,m;
    // scanf("%d%d",&n,&m);
    // int a[m];
    // for(int i=0;i<m;++i)
    // scanf("%d",&a[i]);
    // int ans=a[0]-1;
    // for(int i=1;i<m;++i)
    // {
    //     if(a[i-1]>a[i])ans+=(n-a[i-1]+a[i]);
    //     else ans+=a[i]-a[i-1];
    // }
    // printf("%d\n",ans);



    // int n;
    // // cin>>n;
    // scanf("%d",&n);
    // char c[n];
    // scanf("%s",c);
    // int even_cnt=0;
    // // if(c[0]==)
    // for(int i=0;i<n;++i)
    // {
    //     if((c[i]-'0')%2==0)even_cnt+=i+1;
    // }
    // printf("%d\n",even_cnt);
}