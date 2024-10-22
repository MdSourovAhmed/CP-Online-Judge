#include<bits/stdc++.h>
using namespace std;

unordered_map<string,string>m{{"HELLO","ENGLISH"},{"HOLA","SPANISH"},{"HALLO","GERMAN"},{"BONJOUR","FRENCH"},{"CIAO","ITALIAN"},{"ZDRAVSTVUJTE","RUSSIAN"}};

int main()
{
	int i=1;
	while(true)
	{
	string s;
	cin>>s;
	if(s[0]=='#')return 0;
	if(m.find(s)!=m.end())
		cout<<"Case "<<i<<": "<<m[s]<<endl;
	else
		cout<<"Case "<<i<<": UNKNOWN\n";
	i++;
	}
	return 0;
}