// reverse of array
//#include <iostream>
//using namespace std;
/*void reverse(int arr[],int n)
{
    int start=0;
    int end=n-1;
    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }


    }

void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
   int n;
   int arr[100]={1,2,3,4};
  reverse(arr,4);
  printarray(arr,4);
   
   }*/
  /*void printarray(int arr[],int n)
   {
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }cout<<endl;
   }
   void reversealt(int arr[],int size)
   {
    for(int i=0;i<size;i=i+2){
        if(i+1<size)
        {
            swap(arr[i],arr[i+1]);
        }
    }
   }
   int main()
   {
    int even[6]={1,2,4,5,6,7};
    int odd[5]={1,2,3,4,5};
    reversealt(even,6);
    printarray(even,6);
    reversealt(odd,5);
    printarray(odd,5);

  

    
   }*/
   /* #include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	int largest=arr[n-1];
	int store_array[largest+1]={0};
	for(int i=0;i<n;i++){
		store_array[arr[i]]++;
	}
	sort(store_array,store_array+largest+1);
	int prev=0;
	int flag=0;
	for(int i=0;i<largest+1;i++){
		if(store_array[i]!=0){
			if(prev==store_array[i]){
				flag=1;
				break;
                }
			prev=store_array[i];
		}
	}
	if(flag==0){
		cout<<"True";
	}
	else{
		cout<<"False";
	}
}

 */


















































    