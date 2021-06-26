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

void print_Preorder(node* root){
  if(root=NULL){
    return;
  }

  //Print root first and then children
  cout<<root->data<<" ";
  print_Preorder(root->left);
  print_Preorder(root->right);
}

void print_Inorder(node* root){
  if(root==NULL){
    return;
  }

  print_Inorder(root->left);
  cout<<root->data<<" ";
  print_Inorder(root->right);
}

void print_Postorder(node* root){
  if(root=NULL){
    return;
  }

  print_Postorder(root->left);
  print_Postorder(root->right);
  cout<<root->data<<" ";
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

void printKthLevel(node* root,int k){
  if(root==NULL){
    return;
  }
  if(k==1){
    cout<<root->data<<" ";
    return;
  }
  printKthLevel(root->left,k-1);
  printKthLevel(root->right,k-1);
  return;
}

void printAllLevels(node* root){
  int H=height(root);

  for(int i=1;i<=H;i++){
    printKthLevel(root,i);
  }
  return;
}

void bfs(node* root){
  queue<node*> q;
  q.push(root);

  while(!q.empty()){
    node* f=q.front();
    cout<<f->data<<",";
    q.pop();

    if(f->left){
      q.push(f->left);
    }
    if(f->right){
      q.push(f->right);
    }
  }
  return;
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

int main()
{  
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  node* root=buildtree();
  print_Preorder(root);
  cout<<endl;
  print_Inorder(root);
  cout<<endl;
  print_Postorder(root);
  cout<<endl;
  cout<<height(root)<<endl;
  printAllLevels(root);
  cout<<endl;
  bfs(root);
  cout<<endl;
}