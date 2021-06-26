#include<bits/stdc++.h>
using namespace std;

void maximum_subarray_zero(int arr[],int n){
  unordered_map<int,int> m;
  int pre=0;
  int len=0;

  for(int i=0;i<n;i++){
    pre+=arr[i];
    if(pre==0){
      len=max(len,i+1);
    }
    else if(m.find(pre)!=m.end()){
      len=max(len,i-m[pre]);
    }
    else{
      m[pre]=i;
    }
  }
  cout<<"Maximum length is: "<<len<<endl;
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
    cin>>arr[i];
  }
  maximum_subarray_zero(arr,n);
}