#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int target;
    cin>>target;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int l=j+1;
            int k=n-1;
            while(l<k)
            {
                int sum=0;
                sum=arr[i]+arr[j]+arr[l]+arr[k];
                if(sum==target)
                {
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[l]<<" "<<arr[k]<<endl;
                    l++;
                    k--;
                }
                else if(sum<target)
                {
                    l++;
                }
                else
                k--;


            }
        }
    }


}