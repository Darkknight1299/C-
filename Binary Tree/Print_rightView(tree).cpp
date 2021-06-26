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

void printRightview(node* root,int level,int &max_level){ //max_level is by refernce cause otherwise its value will get resetted when we gor to left traversal after right
  //base case
  if(root==NULL){
    return;
  }
  if(max_level<level){
    //have discovered a new level
    cout<<root->data<<" ";
    max_level=level;
  }
  //traverse right and left
  printRightview(root->right,level+1,max_level);
  printRightview(root->left,level+1,max_level);
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
  int max_level=-1;
  printRightview(root,0,max_level);
}