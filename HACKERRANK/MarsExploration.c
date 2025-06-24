#include<stdio.h>
#include<stdlib.h>

int marsExploration(char* s) {
    int ans=0;
    for(int i=0;s[i];++i){
        int j=i%3;
        if((j==0&&s[i]!='S')||(j==1&&s[i]!='O')||(j==2&&s[i]!='S'))ans++;
    }
    return ans;
}

int main(){
    int n;scanf("%d",&n);
    char s[n];scanf("%s",s);
    printf("%d\n",marsExploration(&s));
}

// input:
// 12
// SOSSPSSQSSOR

// output:
// 3