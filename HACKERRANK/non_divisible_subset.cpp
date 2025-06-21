#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'nonDivisibleSubset' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER k
 *  2. INTEGER_ARRAY s
 */
int Max(int a,int b){return (a>b)?a:b;}
int Min(int a,int b){return (a<b)?a:b;}
int nonDivisibleSubset(int k, vector<int> s) {
vector<int>v(k,0);
for(int &a:s)v[a%k]++;
int c=0;
c+=Min(v[0],1);
if(!(k&1))
c+=Min(v[k/2],1);
for(int i=1;i*2<k;i++)c+=Max(v[i],v[k-i]);
return c;
}
int main(){
int n,k;
cin>>n>>k;
vector<int>v(n);
for(int &i:v)cin>>i;
cout<<nonDivisibleSubset(k,v)<<endl;
return 0;
}
