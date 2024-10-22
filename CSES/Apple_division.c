#include <stdio.h>
#include <math.h>
typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f;
ll Min(ll a,ll b)
{return a>b?b:a;}
int N, p[20];
ll a, b, best;

int main(){
    scanf("%d", &N);
    for(int i = 0; i < N; i++)
        scanf("%d", &p[i]);

    best = INF;
    for(int i = 0; i < (1<<N); i++){
        // int n=log2(i);
        a = 0; b = 0;
        for(int j = 0; j < N; j++){
            if(i&(1<<j))    a += p[j];
            else            b += p[j];
        }
        best = Min(best, abs(a-b));
    }
    printf("%lld\n", best);
}