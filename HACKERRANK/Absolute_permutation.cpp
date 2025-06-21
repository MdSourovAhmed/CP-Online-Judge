#include<bits/stdc++.h>
using namespace std;

vector<int> absolutePermutation(int n, int k) {
    vector<int>ans;
    if(!k){for(int i=1;i<=n;++i)ans.push_back(i); return ans;}
    if((n%k)||(n/k)&1){ans.push_back(-1); return ans;}
    bool sft=1;
    for(int i=0,p=1;i<n/k;++i){
        for(int j=0;j<k;j++)
            {ans.push_back(p+(sft?k:-k));p++;}
        sft^=1;
    }
    return ans;
}

int main(){
int n,k;
cin>>n>>k;
vector<int>ans=absolutePermutation(n,k);
for(int i:ans)cout<<i" ";
cout<<endl;
return 0;
}
