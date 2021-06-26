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
 
 //only when both are present in the tree
node* lca(node* root,int a,int b){
  if(root==NULL){
    return NULL;
  }
  if(root->data==a or root->data==b){
    return root;
  }
   //search in left and right search tree
  node* leftans=lca(root->left,a,b);
  node* rightans=lca(root->right,a,b);

  if(leftans!=NULL and rightans!=NULL){
    return root;
  }
  if(leftans!=NULL){
    return leftans;
  }
  return rightans;
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
  node* ans=lca(root,6,1);
  cout<<ans->data<<endl;
}