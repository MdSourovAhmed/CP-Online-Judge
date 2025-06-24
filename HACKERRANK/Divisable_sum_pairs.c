
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int divisibleSumPairs(int n, int k, int ar_count, int* ar) {
    int *frq=calloc(k, sizeof(int));
    for(int i=0;i<n;++i)frq[ar[i]%k]++;
    int ans=0;
    for(int i=0;i+i<=k;i++){
        if(!i||i+i==k)ans+=(frq[i]*(frq[i]-1)/2);
        else ans+=(frq[i]*frq[k-i]);
    }
    return ans;
}

int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    int ar[n];
    for(int i=0;i<n;++i)
    scanf("%d",&ar[i]);
    printf("Ans is: %d\n",divisibleSumPairs(n,k,0,ar));
}