#include<bits/stdc++.h>
using namespace std;

int main()
{
	long n;
	cin>>n;
	cin.ignore();
	while(n--)
	{
		string s;
		cin>>s;
		stack<char>st;
		int l=s.size();
		// cout<<l<<" ";
		if(l-1==0){cout<<"Yes\n";}
		else
		{
		bool ans=true;
		for(char a:s)
		{
			if(a=='('||a=='[')st.push(a);
			else{
				if(st.empty()){ans=false;break;}
				char c=st.top();
				st.pop();
				if(a==')'&&c!='('||a=='['&&c!=']'){ans=false;break;}
			}	
		}

		// if (!st.empty())
		// {
		// 	ans=false;
		// }
		if(ans&&st.empty())cout<<"Yes\n";
		else cout<<"No\n";
	   }
	}
	return 0;
}