#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

std::vector<ll>F(5000);
ll Fib(int n)
{
    F[0]=0;F[1]=1;
    if(n==0)return 0;
    if(n==1)return 1;
    if(F[n])return F[n];
    return F[n]=Fib(n-1)+Fib(n-2);
    // for(int i=2;i<5001;++i)
    //     F[i]=F[i-1]+F[i-2];
}
// int fib(int n)
// {
//     // Base cases
//     if (n == 0)
//         return 0;
//     if (n == 1 || n == 2)
//         return (F[n] = 1);
 
//     // If fib(n) is already computed
//     if (F[n])
//         return F[n];
 
//     int k = (n & 1)? (n+1)/2 : n/2;
 
//     // Applying above formula [Note value n&1 is 1
//     // if n is odd, else 0.
//     F[n] = (n & 1)? (fib(k)*fib(k) + fib(k-1)*fib(k-1))
//            : (2*fib(k-1) + fib(k))*fib(k);
 
//     return F[n];
// }

int main()
{
    Fib(5000);
    ll n;
    while(cin>>n)
    {
        cout<<"The Fibonacci number for "<<n<<" is "<<F[n]<<endl;
    }
    return 0;
}




// Solar system Animation with grapics in c++;
// Modern periodic table;


// SORTING:
// 1. Bubble
// 2. Quick
// 3. Merge
// 4. Selection

// Searching:
// 1. Binary
// 2. Lenear
