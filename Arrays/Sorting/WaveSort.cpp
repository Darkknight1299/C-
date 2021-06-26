#include<bits/stdc++.h>
using namespace std;

int main()
{  
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  int arr[]={1,3,4,2,7,8};
  int n= sizeof(arr)/sizeof(int);
  
  for(int i=0;i<n;i+=2){

    //Prev Element
    if(i!=0 and arr[i]<arr[i-1]){
      swap(arr[i],arr[i-1]);
    }

    //Next Element
    if(i<n and arr[i]<arr[i+1]){
      swap(arr[i],arr[i+1]);
    }
  }

  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}