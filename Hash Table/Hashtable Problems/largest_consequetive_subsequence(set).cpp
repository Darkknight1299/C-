#include<bits/stdc++.h>
using namespace std;

int findLargestSeq(int a[],int n){
  unordered_set<int> s; //number and streak_len
  for(int i=0;i<n;i++){
    s.insert(a[i]); //o(1)
  }
  int max_streak=1;
  //iterate over all elements and target tose elements from which a streak can start
  for(int i=0;i<n;i++){
    if(s.find(a[i]-1)==s.end()){
      //a[i] is starting point of streak;
      //traverse entire range contained in that streak;
      int next_no=a[i]+1;
      int streak_len=1;
      while(s.find(next_no)!=s.end()){
        next_no++;
        streak_len++;
      }
      max_streak=max(max_streak,streak_len);
    }
  }
  return max_streak;
} 

int main()
{   
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  int arr[]={14,5,1,2,6,3,7,8,9,13,15,11,12,13,17};
  int n=sizeof(arr)/sizeof(int);
  cout<<findLargestSeq(arr,n);
}