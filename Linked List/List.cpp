#include<bits/stdc++.h>
#include<list>
using namespace std;

int main()
{  
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  list<int> l;

  //init
  list<int> l1{1,2,3,5,7};
  list<int> l3[100];//array of 100 lists
  list<string> l2{"apple","mango","banana"};
  l2.push_back("pineapple");

  //sort
  l2.sort();//gives laxiographic order

  //reverse
  l2.reverse();

  cout<<l2.front()<<endl;
  l2.pop_front();

  l2.push_front("kiwi");
  cout<<l2.back()<<endl;
  l2.pop_back();

  //iterate over list and print
  for(auto it=l2.begin();it!=l2.end();it++){
    cout<<(*it)<<"->";
  }

  cout<<endl;  
      
  for(string s:l2){
    cout<<s<<"-->";
  }

  cout<<endl;

  l2.push_back("mango");
  for(string s:l2){
    cout<<s<<"-->";
  }
  cout<<endl;
  string f;
  cin>>f;
  l2.remove(f);
  for(string s:l2){
    cout<<s<<"-->";
  }
  cout<<endl;

  //erase
  auto it=l2.begin();
  it++;//cant increment with it+2 cause its list only increases this way
  it++;
  l2.erase(it);
  for(string s:l2){
    cout<<s<<"-->";
  }
  cout<<endl;

  //insert
  auto it2=l2.begin();
  it2++; 
  l2.insert(it2,"FruitJuice"); 
  for(string s:l2){
    cout<<s<<"-->";
  }
  cout<<endl;
}