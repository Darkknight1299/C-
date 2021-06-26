#include<bits/stdc++.h>
using namespace std;

void dnf_sort(int arr[],int n){
  int lo=0;
  int hi=n-1;
  int mid=0;

  while(mid<=hi){
    if(arr[mid]==0){
      swap(arr[mid],arr[lo]);
      lo++;
      mid++;
    }
    if(arr[mid]==1){
      mid++;
    }
    if(arr[mid]==2){
      swap(arr[mid],arr[hi]);
      hi--;
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

  int arr[]={0,0,1,2,2,0,1,2,2};
  int n= sizeof(arr)/sizeof(int);
  dnf_sort(arr,n);
  for(int i=0;i<n;i++){
    cout<<arr[i];
  }
}