
/* int maxLen(vector<int>&A, int n)
    {   
        int sum=0;int maxi=0;
        map<int,int> m;
        for(int i=0;i<n;i++)
        {
            sum+=A[i];
            if(sum==0)
            {
                maxi=max(maxi,i+1);
            }
            int rem=sum;
            if(m.find(rem)!=m.end())
            {
                    maxi=max(maxi,i-m[rem]);
            }
            if(m.find(sum)==m.end())
            m[sum]=i;
        }
        return maxi;
 }
 int main(){
    int n=8;
   #include <bits/stdc++.h>
using  namespace std; vector<int> arr={15,-2,2,-8,1,7,10,23};
    cout<<maxLen(arr,n);
 } */