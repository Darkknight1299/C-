//minimum length of wire to connect all white dots with black dots
#include<bits/stdc++.h>
using namespace std;

int main()
{   
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  int black_dots[]={5,2,6};
  int white_dot[]={3,4,1};
  int len=0;
  sort(black_dots,black_dots+3);
  sort(white_dot,white_dot+3);
  for(int i=0;i<3;i++){
    len+=abs(white_dot[i]-black_dots[i]);
  }
  cout<<len;
}