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

class LinkedList{
public:
  node* head;
  node* tail;
};

LinkedList flatten(node* root){
  LinkedList l;
  //Empty tree
  if(root==NULL){
    l.head=l.tail=NULL;
    return l;
  }
  //1 leaf node
  if(root->left==NULL and root->right==NULL){
    l.head=l.tail=root;
    return l;
  }
  //Left is not Null
  if(root->left!=NULL and root->right==NULL){
    LinkedList LeftLL=flatten(root->left);
    LeftLL.tail->right=root;
    l.head=LeftLL.head;
    l.tail=root;
    return l;
  }
  //Right is not Null
  if(root->left==NULL and root->right!=NULL){
    LinkedList RightLL=flatten(root->right);
    root->right=RightLL.head;
    l.head=root;
    l.tail=RightLL.tail;
    return l;
  }
  //Has 2 children
  LinkedList leftLL=flatten(root->left);
  LinkedList rightLL=flatten(root->right);
  leftLL.tail->right=root;
  root->right=rightLL.head;
  l.head=leftLL.head;
  l.tail=rightLL.tail;
  return l;
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
  LinkedList l=flatten(root);
  node* temp=l.head;
  while(temp!=NULL){
    cout<<temp->data<<"-->";
    temp=temp->right;
  }
  cout<<endl;
}