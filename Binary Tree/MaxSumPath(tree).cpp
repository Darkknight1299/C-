//max sum path between any node to any node in a tree

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

void printAsTree(node* root){
  queue<node*> q;
  q.push(root);
  q.push(NULL);

  while(!q.empty()){
    node* f=q.front();
    if(f==NULL){
      cout<<endl;
      q.pop();
      if(!q.empty()){
        q.push(NULL);
      }
    }
    else{
      cout<<f->data<<" ";
      q.pop();

      if(f->left){
       q.push(f->left);
      }
      if(f->right){
        q.push(f->right);
      }
    }
  }
  return;
}

class Pair
{
public:
  int branchSum;
  int MaxSum;
  Pair(){
    branchSum=0;
    MaxSum=0;
  }
 };

Pair MaxSumPath(node* root){
  Pair p;
  if(root==NULL){
    return p;
  }

  Pair left=MaxSumPath(root->left);
  Pair right=MaxSumPath(root->right);

  //construct values
  int op1=root->data;
  int op2=root->data+left.branchSum;
  int op3=root->data+right.branchSum;
  int op4=root->data+right.branchSum+left.branchSum;

  int curr_ans_through_root=max(op1,max(op2,max(op3,op4)));

  //branch sum of current node
  p.branchSum=max(left.branchSum,max(right.branchSum,0))+root->data; //0 if both left and right are -ve
  p.MaxSum=max(left.MaxSum,right.MaxSum,curr_ans_through_root);
  return p;
}

int main()
{   
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  node* root=buildtree();
  printAsTree(root);
  cout<<endl;
  cout<<findDistance(root,6,5);
}