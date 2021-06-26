#include<iostream>
using namespace std;

int binary_Search(int arr[],int n,int key){
  int s=0;
  int e=n-1;
  while(s<=e){
    int mid=(s+e)/2;
    if(arr[mid]==key){
      return mid;
    }
    else if(arr[mid]>key){
      e=mid-1;
    }
    else{
      s=mid+1;
    }
  }
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

  cout<<binary_Search(arr,n,key); 
}