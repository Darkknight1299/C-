#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

class Node{
public:
  Node* left;//for 0
  Node* right;//for 1
};

class Trie{
  Node* root;
public:
  Trie(){
    root=new Node();
  }
  
  void insert(int n){
    Node* temp=root;
    //Assuming 32 bit integer
    for(int i=31;i>=0;i--){
      int bit=(n>>i)&1;
      if(bit==0){
        if(temp->left==NULL){
          temp->left=new Node();
        }
        temp=temp->left;
      }
      else{
        if(temp->right=NULL){
          temp->right=new Node();
        }
        temp=temp->right;
      }
    }
  }
  //helper function to find max xor
  int max_xor_helper(int value){
    Node* temp=root;
    int current_ans=0;
    for(int j=31;j>=0;j--){
      int bit=(value>>j)&1;
      if(bit==0){
        //find complimentary value
        if(temp->right!=NULL){
          temp=temp->right;
          current_ans+=(1<<j);
        }
        else{
          temp=temp->left;
        }
      }
      else{
        if(temp->left!=NULL){
          temp=temp->left;
          current_ans+=(1<<j);
        }
        else{
          temp=temp->right;
        }
      }
    }
    return current_ans;
  }

  int max_xor(int* input,int n){
    int max_xor=0;
    for(int i=0;i<n;i++){
      int val=input[i];
      insert(val);
      int current_xor=max_xor_helper(val);
      max_xor=max(current_xor,max_xor);
    }
    return max_xor;
  } 
};
  
int main()
{   
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  int input[]={3,5,10,25,2,8};
  int n=6;
  int cxor[6];
  int cxor[0]=input[0];
  for(int i=1;i<n;i++){
    cxor[i]=cxor[i-1]^input[i];
  }
  Trie t;
  cout<<t.max_xor(cxor,n)<<endl;
}