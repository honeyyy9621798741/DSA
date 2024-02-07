#include<bits/stdc++.h>
using namespace std;
 void solve(string temp,int open,int close,vector<string>&ans,int n)
 {
    if(open==n&&close==n)
    {
        ans.push_back(temp);
        return;
    }
    if(open<n)
    {
        solve(temp+'(',open+1,close,ans,n);
    }
    if(close<open)
    {
        solve(temp+')',open,close+1,ans,n);
    }

 }
int main()
{
    int n;
    cin>>n;
    vector<string>ans;
    solve("",0,0,ans,n);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<endl;
    }
   
}