#include<bits/stdc++.h>
using namespace std;

class node{
public:
  int data;
  node* left;
  node* right;

  node(int d){
    data=d;
    left=NULL;
    right=NULL;
  }
};

node* buildtree(){
  int d;
  cin>>d;

  if(d==-1){
    return NULL;
  }

  node* root=new node(d);
  root->left=buildtree();
  root->right=buildtree();
  return root;
}

void print(node* root){
  if(root=NULL){
    return;
  }

  //Print root first and then children
  cout<<root->data<<" ";
  print(root->left);
  print(root->right);
}

int count(node* root){
  //base case
  if(root==NULL){
    return 0;
  }
  //rec case
  return 1+count(root->left)+count(root->right);
}

int sum(node* root){
  //base case
  if(root==NULL){
    return 0;
  }
  //rec case
  return root->data+sum(root->left)+sum(root->right);
}

int main()
{  
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  node* root=buildtree();
  print(root);
}