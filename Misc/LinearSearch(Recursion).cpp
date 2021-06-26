#include<bits/stdc++.h>
using namespace std;

int LinearSearch(int arr[],int n,int key){
  if(n==0){
    return -1;
  }
  if(arr[0]==key){
    return 0;
  }
  int i=LinearSearch(arr+1,n-1,key);
  if(i==-1){
    return -1;
  }
  else{
    return i+1;
  }
}

int main()
{  
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  int arr[]={1,2,3,7,4,5,9};
  int n=sizeof(arr)/sizeof(int);
  int key=7;
  cout<<LinearSearch(arr,n,key);
}