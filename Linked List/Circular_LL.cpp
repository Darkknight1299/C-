#include<bits/stdc++.h>
using namespace std;

class node{
public:
  int data;
  node* next;

  node(int d){
    data=d;
    next=NULL;
  }
};

void insert(node* &head,int d){ //call by refernce to head to change the actual head
  node* temp = new node(d);
  temp->next=head;
  node* tail=head;
  if(tail!=NULL){
    while(tail->next!=head){
      tail=tail->next;
    }
    tail->next=temp;
  }
  else{
    temp->next=temp;
  }
  head=temp;
}

void print(node* head){ //passing head by value tp not affect linkedlist
  node* temp=head;
  while(temp->next!=head){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
  cout<<temp->data<<endl;
}

//deletion of a node in circular LL
node* getNode(node* head,int data){
  node* temp=head;
  //for all nodes except last node
  while(temp->next!=head){
    if(temp->data==data){
      return temp;
    }
    temp=temp->next;
  }
  //out of loop-last element left to check
  if(temp->data==data){
    return temp;
  }
  return NULL;
}

void deleteNode(node* &head,int data){
  node* del=getNode(head,data);
  if(del==NULL){
    return;
  }
  if(del==head){
    head=head->next;
  }
  //otherwise
  node* temp=head;
  while(temp->next!=del){//stop one node before node to be deleted
    temp=temp->next;
  }
  temp->next=del->next;
  delete del;
}

int main()
{  
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  node* head=NULL;
  
  insert(head,10);
  insert(head,20);
  insert(head,30);
  insert(head,40);
  insert(head,50);

  print(head);
}