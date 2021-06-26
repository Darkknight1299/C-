#include<bits/stdc++.h>
#include<climits>
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

node* InsertinBST(node* root,int d){
  //Base case
  if(root==NULL){
    return new node(d);
  }
  //Rec Case
  if(d<=root->data){
    root->left=InsertinBST(root->left,d);
  }
  else{
    root->right=InsertinBST(root->right,d);
  }
  return root;
}

node* build(){
  int d;
  cin>>d;
  node* root=NULL;
  while(d!=-1){
    root=InsertinBST(root,d);
    cin>>d;
  }
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

bool search(node* root,int data){
  if(root==NULL){
    return false;
  }
  if(root->data==data){
    return true;
  }
  //Rec search in left and right subtree
  if(data<=root->data){
    return search(root->left,data);
  }
  else{
    return search(root->right,data);
  }
}

node* deleteinBST(node* root,int data){
  if(root==NULL){
    return NULL;
  }
  else if(data<root->data){
    root->left=deleteinBST(root->left,data);
    return root;
  }
  else if(data==root->data){
    //Found the node to delete....3 cases
    //1. Node with zero children
    if(root->left==NULL and root->right==NULL){
      delete root;
      return NULL;
    }
    //2. Has one child
    if(root->left!=NULL and root->right==NULL){
      node* temp=root->left;
      delete root;
      return temp;
    }
    if(root->left==NULL and root->right!=NULL){
      node* temp=root->right;
      delete root;
      return temp;
    }
    //3. has 2 child
    node* replace=root->right;
    //Found the inorder successor from right subtree
    while(replace->left!=NULL){
      replace=replace->left;
    }
    root->data=replace->data;
    root->right=deleteinBST(root->right,replace->data);
  }
  else{
    root->right=deleteinBST(root->right,data);
    return root; 
  }
}

//Check if the root value is greater than min value and less than max value for each node
bool isBST(node* root,int minV=INT_MIN,int maxV=INT_MAX){
  if(root==NULL){
    return true;
  }
  if(root->data>=minV and root->data<=maxV and isBST(root->left,minV,root->data) and isBST(root->right,root->data,maxV)){
    return true;
  }
  return false;
}

int main()
{   
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  node* root=build();
  printAsTree(root);
  cout<<endl;
  if(isBST(root)){
    cout<<"It is a BST";
  }
  /*int s;
  cin>>s;
  root=deleteinBST(root,s);
  printAsTree(root);
  if(search(root,7)){
    cout<<"Present";
  }
  else{
    cout<<"Not Present";
  }*/
}