#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int arr[],int s,int e,int key){
  if(s>e){
    return -1;
  }

  int mid=(s+e)/2;
  if(arr[mid]==key){
    return mid;
  }
  if(arr[mid]>key){
    BinarySearch(arr,0,mid-1,key);
  }
  else if(arr[mid]<key){
    BinarySearch(arr,mid+1,e,key);  
  }
    
}

int main()
{  
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  int arr[]={1,2,3,4,5,10,20};
  int n=sizeof(arr)/sizeof(int);
  int key=10;
  cout<<BinarySearch(arr,0,n-1,key);
}