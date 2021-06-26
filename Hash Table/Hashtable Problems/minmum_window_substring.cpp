#include<bits/stdc++.h>
using namespace std;

string find_window(string s,string pat){
  int SL=s.length();
  int PL=pat.length();

  //Corner case
  if(PL>SL){
    return "None";
  }

  //Freq Map
  int FS[256]={0};
  int FP[256]={0};

  for(int i=0;i<PL;i++){
    char ch=pat[i];
    FP[ch]++;
  }

  //Sliding Window (Expansion and contraction + update the min length window)
  int count=0;
  int start=0; //left pointer for shrinking
  int min_len=INT_MAX;
  int start_idx=-1;
  for(int i=0;i<SL;i++){
    char ch=s[i];
    FS[ch]++;

    //maintain the count of characters matched
    if(FP[ch]!=0 and FS[ch]<=FP[ch]){
      count++;
    }

    //if all characters match
    if(count==PL){
      //start contracting from left
      
      char temp=s[start];
      //Loop to remove all unwanted characters
      while(FP[temp]==0 or FS[temp]>FP[temp]){
        FS[temp]--;
        start++;
        temp=s[start];
      }

      //window length
      int window_len=i-start+1;
      if(min_len>window_len){
        min_len=window_len;
        start_idx=start;
      }
    } 
  }
  if(start_idx==-1){
    return "None";
  }
  else{
    string ans=s.substr(start_idx,min_len);
    return ans;
  }
}   

int main()
{   
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  string s="hllloeaeo world";
  string p="eelo";
  cout<<find_window(s,p)<<endl;
}