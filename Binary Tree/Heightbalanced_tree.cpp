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
      cout<<f->data;
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


class HBPair{
public:
  int height;
  bool balanced;
};

HBPair isHeightBalanced(node* root){
  HBPair p;
  if(root==NULL){
    p.height=0;
    p.balanced=true;
    return p;
  }

  //rec case
  HBPair left=isHeightBalanced(root->left);
  HBPair right=isHeightBalanced(root->right);

  p.height=max(left.height,right.height)+1;
  if(abs(left.height-right.height)<=1 and left.balanced and right.balanced){ //abs=absolute value
    p.balanced=true;
  }
  else{
    p.balanced=false;
  }
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
  HBPair q;
  q=isHeightBalanced(root);
  if(q.balanced){
    cout<<"It is balanced";
  }
  else{
    cout<<"It is not balanced";
  }
}