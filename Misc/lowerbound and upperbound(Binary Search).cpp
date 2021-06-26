#include<bits/stdc++.h>
using namespace std;

int firstOccurance(int arr[],int n,int key){
  int s=0;
  int e=n-1;
  int ans=0;
  while(s<=e){
    int mid=(s+e)/2;
    if(key==arr[mid]){
      ans=mid;
      e=mid-1;
    }
    else if(arr[mid]>key){
      e=mid-1;
    }
    else{
      s=mid+1;
    }
  }
  return ans;
}

int lastOccurance(int arr[],int n,int key){
  int s=0;
  int e=n-1;
  int ans=-1;
  while(s<=e){
    int mid=(s+e)/2;
    if(arr[mid]==key){
      ans=mid;
      s=mid+1;
    }
    else if(arr[mid]>key){
      e=mid-1;
    }
    else{
      s=mid+1;
    }
  }
  return ans;
}

int main()
{  
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[n];
  }
  int key;
  cin>>key;

  /*cout<<firstOccurance(arr,n,key);
  cout<<endl;
  cout<<lastOccurance(arr,n,key);
  cout<<endl;*/
  auto it=lower_bound(arr,arr+n,key);
  cout<<(it-arr);
}