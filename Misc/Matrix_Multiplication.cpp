#include<bits/stdc++.h>
using namespace std; 

int main()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts
    
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        cin>>arr[i][j];
      }
    }

    int arr1[n][n];
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        cin>>arr1[i][j];
      }
    }

    int res[n][n];

    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        res[i][j]=0;
        for(int k=0;k<n;k++){
          res[i][j]+=arr[i][k]*arr1[k][j];
        }
      }
    }    

    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        cout<<res[i][j]<<" ";
      }
      cout<<endl;
    }
}
  