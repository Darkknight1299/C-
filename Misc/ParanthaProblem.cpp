#include<iostream>
#include<algorithm>
using namespace std;

bool Ifpossible(int p,int n,int c[],int min_time){
  int no=0,cnt=1,t=0;
  for(int i=0;i<n;i++){
    while(t<=min_time){
      t+=c[i]*cnt;
      cnt++;
      if(cnt>p){
        return true;
      }
    }
    no=cnt;
    cnt=1;
    if(no>=p){
      return true;
    }
  }
  return false;
}

int paratha(int p,int n,int c[]){
  int s=0;
  int e=0,cnt=1;
  while(cnt<=p){
    e+=c[0]*cnt;
    cnt++;
  }

  int ans=0;
  while(s<=e){
    int mid=(s+e)/2;
    bool canMake=Ifpossible(p,n,c,mid);
    if(canMake){
      ans=mid;
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
    int p;
    cin>>p;
    int n;
    int c[n];
    for(int i=0;i<n;i++){
      cin>>c[i];
    }
    sort(c,c+n);
    cout<<paratha(p,n,c);
    t--;
  }
}