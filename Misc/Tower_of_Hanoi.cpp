#include<bits/stdc++.h>
using namespace std;

void Tower_of_Hanoi(int n,char src,char dest,char helper){
  //Base case
  if(n==0){
    return;
  }

  //Recursive Case
  Tower_of_Hanoi(n-1,src,helper,dest);
  cout<<"Move "<<n<<"from "<<src<<" to "<<dest<<endl;
  Tower_of_Hanoi(n-1,helper,dest,src);
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
  Tower_of_Hanoi(n,'A','B','C');
}