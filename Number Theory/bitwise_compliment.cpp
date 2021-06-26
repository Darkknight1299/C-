#include<bits/stdc++.h>
using namespace std;

int bitwiseComplement(int N) {
        int X = 1;
        while (N > X) X = X * 2 + 1; //mask of 1's upto N, N+ans=111....11111 
        return X - N;
    }  

int main()
{   
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  int n;
  cin>>n;
  cout<<bitwiseComplement(n);
}