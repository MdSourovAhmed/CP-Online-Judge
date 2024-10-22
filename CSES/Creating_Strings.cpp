#include <bits/stdc++.h>
using namespace std;
set<string>ans;
string name;
vector<bool> vis(1<<9);
void parmutation(string &s)
{
    if (name.size() == s.size())
    {
        ans.insert(name);
        return;
    }
    for (int j = 0; j < s.size(); ++j)
    {
        if (vis[j])
            continue;
        vis[j] = true;
        name.push_back(s[j]);
        parmutation(s);
        vis[j] = false;
        name.pop_back();
    }
}
int main()
{
    string s;
    cin >> s;
    // cout<<s;
    parmutation(s);
    cout<<ans.size()<<endl;
    for(string a:ans)
    cout<<a<<endl;
}