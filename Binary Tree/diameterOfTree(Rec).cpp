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

int height(node* root){
  //Base case
  if(root==NULL){
    return 0;
  }

  //rec case
  int left_h=height(root->left);
  int right_h=height(root->right);
  return max(left_h,right_h)+1;
}

int diameter(node* root){
  if(root==NULL){
    return 0;
  }

  h1=height(root->left);
  h2=height(root->right);
  int op1=h1+h2;
  int op2=diameter(root->left);
  int op3=diameter(root->right);

  return max(op1,max(op2,op3));
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