#include<iostream>
#include<algorithm>
using namespace std;

bool Ifpossible(long long int n,long long int m,long long int x,long long int y,long long int mid){
  long long int a;
  a=m+(n-mid)*y;
  if(mid*x<=a){
    return true;
  }
  else{
    return false;
  }
}

long long int maxScholarship(long long int n,long long int m,long long int x,long long int y){
  long long int ans;
  long long int s=0;
  long long int e=n;
  while(s<=e){
    long long int mid=(s+e)/2;
    bool Hosakta=Ifpossible(n,m,x,y,mid);
    if(Hosakta){
      ans=mid;
      s=mid+1;
    }
    else(e=mid-1);
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

  long long int n,m,x,y;
  cin>>n>>m>>x>>y;
  cout<<maxScholarship(n,m,x,y);
}