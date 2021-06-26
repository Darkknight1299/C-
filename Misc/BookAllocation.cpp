#include<iostream>
#include<climits>
using namespace std;

bool isPossible(int arr[],int n,int m,int curr_min){
  int StudentUsed=1;
  int pages_reading=0;

  for(int i=0;i<n;i++){
    if(pages_reading+arr[i]>=curr_min){
      StudentUsed++;

      pages_reading=arr[i];
      if(StudentUsed>m){
        return false;
      }
    }
    else{
      pages_reading+=arr[i];
    }
  }
  return true;
}

int findpages(int arr[],int n,int m){
  long long int sum=0;
  if(n<m){
    return -1;
  }
  for(int i=0;i<n;i++){
    sum+=arr[i];
  }

  int s=arr[n-1];
  int e=sum;
  int ans=INT_MAX;

  while(s<=e){
    int mid=(s+e)/2;
    if(isPossible(arr,n,m,mid)){
      ans=min(ans,mid);
      e=mid-1;
    }
    else{
      s=mid+1; 
    }
  }
  return ans;
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
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    cout<<findpages(arr,n,m);
    t--;
  }
}