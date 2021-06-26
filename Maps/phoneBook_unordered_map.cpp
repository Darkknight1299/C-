#include<bits/stdc++.h>
#include<unordered_map>
#include<cstring>
using namespace std;

int main()
{   
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  unordered_map<string,vector<string>> phonebook;
   phonebook["Rahul"].push_back("9110");
   phonebook["Rahul"].push_back("9112");
   phonebook["Rahul"].push_back("9113");

   phonebook["Kajal"].push_back("8145");
   phonebook["Kajal"].push_back("8143");
   phonebook["Kajal"].push_back("8141");

  for(auto p:phonebook){
    cout<<"Name "<<p.first<<"-> ";
    for(auto s:p.second){
      cout<<s<<" , ";
    }
    cout<<endl;
  }

  string name;
  cin>>name;
  if(phonebook.count(name)){
    for(auto s:phonebook[name]){
      cout<<s<<" , ";  
    }
    cout<<endl;
  }
  else{
    cout<<"Absent"<<endl;
  } 
}