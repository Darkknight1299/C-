#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;

bool checkSum(int arr[],int n){
  unordered_set<int> s;

  int pre=0;
  for(int i=0;i<n;i++){
    pre+=arr[i];
    //check if sum is already present in set
    if(pre==0 or s.find(pre)!=s.end()){
      return true;
    }
    s.insert(pre);
  }
  return false;
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
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<checkSum(arr,n);
}