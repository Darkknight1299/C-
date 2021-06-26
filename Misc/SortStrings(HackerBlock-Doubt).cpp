#include<bits/stdc++.h>
#include<cstring>
#include<algorithm>
using namespace std;

string extractToken(string str,int key){
  char *s=strtok((char *)str.c_str()," ");
  while(key>1){
    s=strtok(NULL," ");
    key--;
  }
  return (string)s;
}

int convertToInt(string s){
  int ans=0;
  int p=1;
  for(int i=s.length()-1;i>=0;i--){
    ans+=((s[i]-'0')*p);
    p*=10;
  }
  return ans;
}

bool numericCompare(pair<string,string>str,pair<string,string>str2){
  string s1=str.second;
  string s2=str2.second;
  return convertToInt(s1)<convertToInt(s2);
}

bool lexioCompare(pair<string,string>str,pair<string,string>str2){
  string s1=str.second;
  string s2=str2.second;
  return s1<s2;
}

int main()
{
  int n;
  cin>>n;
  cin.get();
  string a[100];
  for(int i=0;i<n;i++){
    getline(cin,a[i]);
  }
  int key;
  cin>>key;
  pair<string,string> strPair[100];
  for(int i=0;i<n;i++){
     strPair[i].first=a[i];
     strPair[i].second=extractToken(a[i],key);
  }
  
  string order;
  cin>>order;
  if(order=="numeric"){
    sort(strPair,strPair+n,numericCompare);
  }
  else{
    sort(strPair,strPair+n,lexioCompare);
  }

  string reverse;
  cin>>reverse;
  if(reverse=="true"){
    for(int i=0;i<n/2;i++){
      swap(strPair[i],strPair[n-i-1]);
    }
  }

  for(int i=0;i<n;i++){
    cout<<strPair[i].first<<endl;
  }
}
