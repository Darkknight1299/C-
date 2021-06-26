#include<bits/stdc++.h>
using namespace std;
#include<algorithm>

int main()
{  
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  //Find Function
  int arr[]={1,2,3,4,4,4,5,6,7};
  int key=5;
  auto it=find(arr,arr+n,key);
  cout<<"Position of key is:"<<it-arr;

  //Binary-Search Function
  bool present=binary_search(arr,arr+n,key);
  if(present){
    cout<<"It is present";
  }
  else{
    cout<<"Not Present";
  }

  //Lower Bound and Upper Bound Function
  key=4;
  auto it1=lower_bound(arr,arr+n,key)-arr;
  cout<<"Position of First 4 is"<<it1-arr;

  auto it2=upper_bound(arr,arr+n,key)-arr;
  cout<<"Position of next Number to 4 is:"<<it2-arr;

  cout<<"Frequency of 4 is:"<<(it2-it1);

  //Rotate Function
  rotate(arr,arr+2,arr+n);
  for(int i=0;i<n;i++){
    cout<<arr[i];
  }

  //Next Permutation
  next_permutation(arr,arr+n);
  rotate(arr,arr+2,arr+n);
  for(int i=0;i<n;i++){
    cout<<arr[i];
  }

  //Reverse Function
  reverse(arr+2,arr+6);
  rotate(arr,arr+2,arr+n);
  for(int i=0;i<n;i++){
    cout<<arr[i];
  }  
}