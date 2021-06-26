#include<bits/stdc++.h>
#include<vector>
using namespace std;

void subarraysDivByk(vector<int> A,int k){
  int count[k]={0};
  int P[A.size()+1]={0};
  for(int i=0;i<A.size();i++){
    P[i+1]=P[i]+A[i];
  }
  for(int i=0;i<=A.size();i++){
    count[(P[i]%k + k)%k]++; //if it becomes negitive so add k, and if it is positivethan adding would make it bigger than k so again modulo k
  }
  int ans=0;
  for(int i=0;i<k;i++){
    ans+=(count[i]*(count[i]-1))/2;
  }
  cout<<ans;
}

int main()
{   
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  vector<int> A;
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    int no;
    cin>>no;
    A.push_back(no);
  }
  int k;
  cin>>k;
  subarraysDivByk(A,k);  
}