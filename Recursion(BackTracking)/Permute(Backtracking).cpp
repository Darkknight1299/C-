#include<bits/stdc++.h>
using namespace std;

void permute(char *in,int i){
  //Base Case
  if(in[i]=='/0'){
    cout<<in<<" ";
    return;
  }

  //Rec Case
  for(int j=i;in[j]!='/0';j++){
    swap(in[i],in[j]);
    permute(in,i+1);

    //BackTracking
    swap(in[i],in[j]);
  }
}

int main()
{  
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  char a[100];
  cin>>a;
  permute(a,0);
}