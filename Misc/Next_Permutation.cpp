#include<bits/stdc++.h>
using namespace std;

bool compare(int a,int b){
  return a<=b;
}

int main()
{  
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  int t;
  cin>>t;
  while(t){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    int i=n-2,flag=0;
    for(;i>=0;i--)
    {
      if(arr[i]>=arr[i+1])
      continue;
    else
      {flag=1;break;}
    }
    sort(arr+i+1,arr+n);
    if(flag)
    {
      for(int j=i+1;j<n;j++)
        {if(arr[j]>arr[i])
          {swap(arr[i],arr[j]);break;}
        }
    }
    for(int p=0;p<n;p++)
    {
      cout<<arr[p]<<" ";
    }cout<<endl;
    t--;
  }
}