#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    vector<int>dp(n,-1);
    dp[0]=v[0];
    if(n==0)
    cout<<0;
    if(n==1)
    cout<<v[0];
    if(n==2)
    {
        return max(v[0],v[1]);
    }
    dp[1]=max(v[0],v[1]);
    for(int i=2;i<n;i++)
    {
        dp[i]=max(dp[i-1],v[i]+dp[i-2]);
    }
    cout<<dp[n-1];
    
    

    
}
