#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<vector<string>>ans;
    unordered_map<string,vector<string>>mp;
    for(int i=0;i<n;i++)
    {
        string temp=arr[i];
        sort(temp.begin(),temp.end());
        mp[temp].push_back(arr[i]);

    }
    for(auto it:mp)
    {
        ans.push_back(it.second);
    }
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}