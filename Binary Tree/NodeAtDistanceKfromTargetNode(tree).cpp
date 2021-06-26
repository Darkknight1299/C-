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

void printAtLevelK(node* root,int k){
  //base case
  if(root==NULL){
    return;
  }
  if(k==0){
    cout<<root->data<<" ,";
    return;
  }
  //rec case
  printAtLevelK(root->left,k-1);
  printAtLevelK(root->right,k-1);
}

int printAtDistanceK(node* root,node* target,int k){
  //base case
  if(root==NULL){
    return -1;
  }
  //reach the target node
  if(root==target){
    printAtLevelK(root,k);
    return 0; //distance of target node is zero to the parent  
  }
  //next step-ancestor
  int DL=printAtDistanceK(root->left,target,k);
  if(DL!=-1){
    //ancestor itself or go to right
    if(DL+1==k){
      cout<<root->data<<" ";
    }
    else{
      printAtLevelK(root,k-2-DL); //standart value of k(formula)
    }
    return DL+1;
  }

  int DR=printAtDistanceK(root->right,target,k); //Distance of target node to an ancestor if target node is in right subtree of ancestor 
  if(DR!=-1){
    if(DR+1==k){
      cout<<root->data<<" ";
    }
    else{
      printAtLevelK(root->left,k-2-DR);
    }
    return DR+1;
  }
  //Node was not present in the left and right subtree
  return -1;
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
  node* target=root->left->left;
  printAtDistanceK(root,3);
}