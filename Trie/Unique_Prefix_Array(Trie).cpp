#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

class Node{
public:
  char data;
  unordered_map<char,Node*> children;
  int freq;
  bool terminal;

  Node(char d){
    data=d;
    freq=0;
    terminal=false;
  }
};

class Trie{
  Node* root;
  int cnt;
public:
  Trie(){
    root=new Node('\0');
    cnt=0;
  }
  
  void insert(char* w){
    Node* temp=root;
    for(int i=0;w[i]!='\0';i++){
      char ch=w[i];
      if(temp->children.count(ch)){
        temp->freq++;
        temp=temp->children[ch];
      }
      else{
        Node* n=new Node(ch);
        temp->children[ch]=n;
        temp->freq++;
        temp=n;
      }
    }
    temp->terminal=true;
  }

  bool find(char* w){
    Node* temp=root;
    string ans[10];
    int cnt=0;
    string out;
    for(int i=0;w[i]!='\0';i++){
      char ch=w[i];
      temp=temp->children[ch];
      if(temp->freq==1){
        out=temp->data;
        ans[cnt]=out;
        cnt++;
      }
      else{
        out+=temp->data;
      }
    }  
};
  
int main()
{   
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  Trie t;
  char words[][10]={"a","hello","apple","news","not"};
  char w[10];
  cin>>w;

  for(int i=0;i<5;i++){
    t.insert(words[i]);
  }

  if(t.find(w)){
    cout<<"Present";
  }
  else{
    cout<<"Not Present";
  }
}