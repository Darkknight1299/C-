#include<bits/stdc++.h>
#include<deque>
using namespace std;

int main()
{  
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  int n,i;
  int a[100005];
  int k;

  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  cin>>k;

  //We have to  process first k elements separetly 
  deque<int> Q(k);

  for(i=0;i<k;i++){
    while(!Q.empty() && a[i]>a[Q.back()]){
      Q.pop_back;
    }
    Q.push_back(i);
  }

  //Process remaining elements
  for(;i<n;i++){
    cout<<Q.front()<<" ";
    //Remove the elemeents which are not the part of the window(Contraction)
    while(!Q.empty() and Q.front()<=i-k){
      Q.pop_front();
    }

    //Remove the elements which are not useful and are in window
    while(!Q.empty() && a[i]>=a[Q.back()]){
      Q.pop_back;
    }

    //Add the new elements(Expansive)
    Q.push_back(i);
  }
//Print max of last window
cout<<Q.front()<<endl;
}