#include<bits/stdc++.h>
using namespace std;

int main()
{  
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  int **arr;
  int r,c;
  cin>>r>>c;

  //Create an array of row head
  arr[i] = new int *[r];
  
  //Create a 2d Array
  for(int i=0;i<r;i++){
    arr[i] = new int[c];
  }

  //take input and print output
  int val=1;
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      arr[i][j]=val;
      val++;
      cout<<arr[i][j];
    }
    cout<<endl;
  }

  return 0;
}