#include<bits/stdc++.h>
using namespace std;

int main()
{  
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  int t,a[4],n,m;
  cin>>t;
  while(t){
    //Input the costs
    for(int i=0;i<4;i++){
      cin>>a[i];
    }

    //Input the no of riskshaws and cabs
    cin>>n>>m;
    int r[n],c[m];

    //Input the no. of rides on rikshaw and do calculation
    for(int i=0;i<n;i++){
      cin>>r[i];
    }

    int b1=0;
    for(int i=0;i<n;i++){
      b1+=min(r[i]*a[0],a[1]);  
    }
    int b2=min(b1,a[2]);

    //Input the no. of rides on cabs and do calculation
    for(int i=0;i<m;i++){
      cin>>c[i];
    }

    int c1=0;
    for(int i=0;i<m;i++){
      c1+=min(c[i]*a[0],a[1]);  
    }
    int c2=min(c1,a[2]);    

    //Final Calculation
    cout<<min((b2+c2),a[3])<<endl;
    t--;
  }
  return 0;
}