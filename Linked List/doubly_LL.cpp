#include<bits/stdc++.h>
using namespace std;

class node{
public:
  int data;
  node* next;
  node* prev;

  node(int d){
    data=d;
    next=NULL;
    prev=NULL;
  }
};

void insertAtHead(node* &head,int d){ //call by refernce to head to change the actual head
  if(head==NULL){
    head = new node(d);
    return;
  }
  node* temp = new node(d);
  temp->next=head;
  head = temp->prev;
}

void insertAtTail(node* &head,int d){
  if(head==NULL){
    head = new node(d);
    return;
  }
  node* tail=head;
  while(tail->next!=NULL){
    tail=tail->next;
  }
  node* n = new node(d);
  tail->next=n;
}

int length(node* head){
  int cnt=0;
  while(head!=NULL){
    cnt++;
    head=head->next;
  }
  return cnt;
}

void insertAtMiddle(node* head,int d,int p){
  if(p==0){
    insertAtHead(head,d);
  }
  else if(p>=length(head)){
    insertAtTail(head,d);
  }
  else{
    //take p-1 jumps
    int jump=1;
    node* temp=head;
    while(jump<=p-1){
      temp=temp->next;
      jump++;
    }
    //create new node
    node* n= new node(d);
    n->next=temp->next;
    temp->next->prev=n;
    n->prev=temp;
    temp->next=n;

  }
}

void print(node* head){ //passing head by value tp not affect linkedlist
  while(head!=NULL){
    cout<<head->data<<" ";
    head=head->next;
  }
}

int main()
{  
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  node* head=NULL;
  insertAtHead(head,3);
  insertAtHead(head,6);
  insertAtHead(head,7);
  insertAtHead(head,9);

  insertAtMiddle(head,4,1);
  insertAtTail(head,10);

  print(head);
}