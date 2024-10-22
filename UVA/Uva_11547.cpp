#include<bits/stdc++.h>
using namespace std;
const int add=7492;
const int sub=498;
const int mul1=567,mul2=235;
const int div1=9,div2=47;
void absol(long long &n)
{
	if(n<0) n=-n;
}
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		long long a;
		cin>>a;
		a*=mul1;
		a/=div1;
		a+=add;
		a*=mul2;
		a/=div2;
		a-=sub;
		a/=10;
		a%=10;
		absol(a);
		cout<<a<<endl;
	}
	return 0;
}