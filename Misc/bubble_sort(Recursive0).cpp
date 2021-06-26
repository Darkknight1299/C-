#include<bits/stdc++.h>
using namespace std;

void BubbleSort(int arr[],int j,int n){
  if(n==1){
    return;
  }
  if(j==n-1){
    return BubbleSort(arr,0,n-1);
  }
  if(a[j]>a[j+1]){
    swap(a[j],a[j+1]);
  }
  BubbleSort(arr,j+1,n);
}

int main()
{  
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  int arr[]={5,4,3,2,1};
  int n=sizeof(arr)/sizeof(int);
  BubbleSort(arr,0,n);
}